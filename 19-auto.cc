#include <cassert>

struct A
{
  bool check()
  {
    return true;
  }
};

A foo()
{
  return A();
}

int main()
{
  auto a = foo();
  assert(a.check());
  return 0;
}
