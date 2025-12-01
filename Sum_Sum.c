#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int tem, posSum = 0, negSum = 0;
   
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&tem);
        if(tem > 0) posSum += tem;
        else negSum += tem;
    }
    printf("%d %d",posSum,negSum);
    return 0;
    
}