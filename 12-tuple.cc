#include <tuple>
#include <cassert>

int main()
{
  std::tuple<int,double,int> a(2,3.5,3);
  assert(std::get<1>(a) == 3.5);
  return 0;
}
