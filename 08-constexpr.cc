#include <cassert>

constexpr int foo () { return 0; }

template< int v >
struct A
{
  static const int value = v;
};

int main()
{
  static_assert(A< foo() >::value == 0,"check failed");
  return 0;
}
