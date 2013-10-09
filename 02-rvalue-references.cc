#include<cassert>
#include <utility>

int foo(int&& x) { return 1; }
int foo(const int& x) { return -1; }

template<typename T>
int forward(T&& x)
{
  return foo(std::forward<T>(x));
}

int main()
{
  int i = 0;
  assert( forward(i) + forward(int(2)) == 0);
  return 0;
}
