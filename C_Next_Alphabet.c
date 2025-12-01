#include<stdio.h>

int main()
{
    char C;
    scanf("%c",&C);
    if(C < 'z') printf("%c",C+1) ;
    else printf("%c",C-'z'+'a') ;
    return 0;
}