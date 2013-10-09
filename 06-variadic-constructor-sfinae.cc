#include <functional>
#include <cassert>

template<typename... U>
struct A
{

  template<typename... T,
           typename = typename std::enable_if<(sizeof...(T) < 2)>::type
                                              >
  A(T... t)
    : i(1)
  {}

    template<typename... T,
             typename = typename std::enable_if<(sizeof...(T) >= 2)>::type,
           typename = void
           >
    A(T... t)
      : i(-1)
  {}

  A()
    : i(1)
  {}

  int i;
};

int main()
{
  assert(A<int>().i + A<int>(2).i + A<int>("foo",3.4).i + A<int>(8,'a',A<int>()).i == 0);
  return 0;
}
