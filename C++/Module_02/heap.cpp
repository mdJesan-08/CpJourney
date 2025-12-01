#include<bits/stdc++.h>

int *p;

void fun()
{
   int x;
   x = 10;
   p = &x;
   std::cout << "Fun ->" << *p << std::endl;
}

int main()
{
  fun();
  std::cout << "Main ->" << *p << std::endl;
  return 0;
}
