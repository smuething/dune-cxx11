#include <unordered_set>
#include <cassert>

int main()
{
  std::unordered_set<double> s;
  s.insert(3.7);
  assert(s.count(3.7) > 0);
  return 0;
}
