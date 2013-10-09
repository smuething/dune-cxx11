#include <memory>
#include <cassert>

int main()
{
  std::shared_ptr<int> p(new int(4));
  assert(*p == 4);
  return 0;
}
