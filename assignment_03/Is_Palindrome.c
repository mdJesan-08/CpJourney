#include<stdio.h>
#include<string.h>


int is_palindrome(char str[])
{
  int s = 0, e = strlen(str)-1;

  while(s <= e)
  {
    if(str[s] != str[e]) return 0;
    else 
    {
        s++;
        e--;
    }
  }

  return 1;
}
int main()
{
    char str[10001];
    scanf("%s",str);

    if(is_palindrome(str) == 1) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}