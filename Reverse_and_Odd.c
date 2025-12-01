#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int start;
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    if(N%2 == 0) start=N-1;
    else start = N-2;

    for(int i=start; i >= 1 ; i=i-2)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}