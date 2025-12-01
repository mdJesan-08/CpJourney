#include<stdio.h>

int main()
{
    int N,tem;
    scanf("%d",&N);
    int pos = 0, neg = 0, even = 0, odd = 0; 
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&tem);
        if(tem >= 0)
        {
            if(tem != 0) pos++;
            if(tem%2==0) even++;
            else odd++;
        }
        else if(tem < 0 )
        {
            neg++;
            if(tem%2==0)  even++;
            else odd++;

        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}