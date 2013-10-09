#include <array>
#include <cassert>

int main()
{
  std::array<int,3> a;
  a[0] = a[1] = a[2] = 3;
  assert(a[2] == 3);
  return 0;
}
