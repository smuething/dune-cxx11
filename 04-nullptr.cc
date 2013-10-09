#include <cassert>

struct A {};

int main()
{
  int* i = nullptr;
  A* a = nullptr;
  assert(i == nullptr);
  assert(a == nullptr);
  return 0;
}
