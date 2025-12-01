#include<stdio.h>

int main()
{
    int N;
    long long int max = -1, tem;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&tem);
        if(tem > max) max = tem;
    }
    printf("%d",max);
    return 0;
}