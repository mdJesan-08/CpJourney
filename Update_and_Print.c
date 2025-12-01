#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int targetPos, newVal;
    scanf("%d", &targetPos);
    scanf("%d", &newVal);

    arr[targetPos] = newVal;
    for(int i = N-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}