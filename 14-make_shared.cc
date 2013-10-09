#include <memory>
#include <cassert>

int main()
{
  std::shared_ptr<int> p(std::make_shared<int>(4));
  assert(*p == 4);
  return 0;
}
