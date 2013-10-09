#include <initializer_list>
#include <vector>
#include <numeric>
#include <cassert>

int foo(std::initializer_list<int> il)
{
  std::vector<int> v(il);
  return std::accumulate(v.begin(),v.end(),0);
}

int main()
{
  assert(foo({1,2,3,4}) == 10);
  return 0;
}
