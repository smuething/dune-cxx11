#include <memory>
#include <cassert>

struct A
  : public std::enable_shared_from_this<A>
{};

int main()
{
  std::shared_ptr<A> p1(new A());
  std::shared_ptr<A> p2 = p1->shared_from_this();
  assert(p1 == p2);
  return 0;
}
