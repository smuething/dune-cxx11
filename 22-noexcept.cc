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

int main()
{
  A a;
  A a2(std::move(a));
  return 0;
}
