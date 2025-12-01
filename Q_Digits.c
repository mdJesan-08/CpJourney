#include<stdio.h>

int main()
{
    int T;
    long long int n;
    scanf("%d",&T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d",&n);
        while(n)
        {
            printf("%d ",n%10);
            n=n/10;
        }
    printf("\n");
    }
    return 0;
}