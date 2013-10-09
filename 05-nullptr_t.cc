#include <cassert>
#include <cstddef>

template<typename T>
bool nullptr_t_check(T*)
{
  return false;
}

bool nullptr_t_check(std::nullptr_t)
{
  return true;
}

int main()
{
  assert(nullptr_t_check(nullptr));
  return 0;
}
