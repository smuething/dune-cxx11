#include <memory>
#include <cassert>

int main()
{
  std::shared_ptr<int> p1(new int(3));
  std::shared_ptr<int> p2(std::move(p1));
  assert(*p2 == 3);
  return 0;
}
