#include <type_traits>
#include <cassert>

int main()
{
  assert((std::conditional<2 != 1,std::true_type,std::false_type>::type::value));
  return 0;
}
