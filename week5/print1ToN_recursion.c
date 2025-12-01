#include<stdio.h>

void printTillN(int n)
{   
  if(n == 0 ) return ;
  printTillN(--n);
  printf("%d\n",n+1);

}

int main()
{
    int n;
    scanf("%d",&n);
    printTillN(n);
   
    return 0;
}