#include <initializer_list>
#include <cassert>
#include <algorithm>

int foo(std::initializer_list<int> il)
{
  int res = 0;
  for (const int* it = il.begin(); it != il.end(); ++it)
    res += *it;
  return res;
}

int main()
{
  assert(foo({1,2,3,4}) == 10);
  return 0;
}
