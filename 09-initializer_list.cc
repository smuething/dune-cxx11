#include <initializer_list>
#include <cassert>
#include <algorithm>

int foo(std::initializer_list<int> il)
{
  return std::accumulate(il.begin(),il.end(),int(0));
}

int main()
{
  assert(foo({1,2,3,4}) == 10);
  return 0;
}
