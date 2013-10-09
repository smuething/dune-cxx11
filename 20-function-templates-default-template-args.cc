#include <type_traits>
#include <cassert>

template<typename T, T v = T(1)>
T foo()
{
  return v;
}

int main()
{
  assert((foo<int>() == 1));
  return 0;
}
