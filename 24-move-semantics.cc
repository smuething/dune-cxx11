#include <utility>
#include <cassert>

struct A
{
  A(int i)
    : _i(i)
  {
    assert(i > 0);
  }

  // no copy construction / assignment
private:
  A(const A&);
  A& operator=(const A&);

public:

  A(A&& a)
    : _i(std::move(a._i))
  {
    assert(_i > 0);
    a._i = -1;
  }

  A& operator=(A&& a)
  {
    _i = a._i;
    assert(a._i > 0);
    a._i = -1;
    return *this;
  }

  int _i;

};

int main()
{
  A a(3);
  A a2(std::move(a));
  A a3(4);
  a3 = std::move(a2);
  assert(a._i == -1);
  assert(a2._i == -1);
  return 0;
}
