#include <utility>

struct A
{
  A()
  {}

  // no copy construction / assignment
  A(const A&) = delete;
  A& operator=(const A&) = delete;

  A(A&& a) noexcept
  {}

  A& operator=(A&& a) noexcept
  {
    return *this;
  }

};

template<typename T>
struct B
{
  B()
  {}

  B(B&& b) noexcept(noexcept(_t(std::move(b._t))))
    : _t(std::move(b._t))
  {}

  B& operator=(B&& b) noexcept(noexcept(b._t = std::move(b._t)))
  {
    _t = std::move(b._t);
    return *this;
  }

  T _t;

};

int main()
{
  A a;
  A a2(std::move(a));
  return 0;
}
