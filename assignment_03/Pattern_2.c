#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    int val;
    for(int i = 0; i < N; i++)
    {
        for(int k = i; k < N-1; k++)
        {
            printf(" ");
        }
        val = i+1;
        for(int j = 0; j <= i; j++)
        {
            printf("%d",val--);
        }
        printf("\n");
    }
    return 0;
}