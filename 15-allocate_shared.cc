#include <memory>
#include <cassert>

int main()
{
  std::allocator<int> allocator;
  std::shared_ptr<int> p(std::allocate_shared<int>(allocator,4));
  assert(*p == 4);
  return 0;
}
