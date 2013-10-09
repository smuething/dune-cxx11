#include <unordered_map>
#include <cassert>

int main()
{
  std::unordered_map<double,int> m;
  m[3.7] = 4;
  assert(m[3.7] == 4);
  return 0;
}
