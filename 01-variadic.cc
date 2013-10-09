#include<cassert>

template<typename... T>
int addints(T... x);

int add_ints()
{
  return 0;
}

template<typename T1, typename... T>
int add_ints(T1 t1, T... t)
{
  return t1 + add_ints(t...);
}

int main()
{
  assert( 5 == add_ints(9,3,-5,-2) );
  return 0;
}
