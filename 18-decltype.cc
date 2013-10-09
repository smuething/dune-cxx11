#include <type_traits>
#include <cassert>

std::true_type foo()
{
  return std::true_type();
}

int main()
{
  typedef decltype(foo()) result;
  assert(result::value);
  return 0;
}
