#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int max=-1;
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max) max = arr[i];
        
    }

    for(int i = 0; i < size; i++)
    {
        arr[i] = max - arr[i];
        printf("%d ",arr[i]);
    }

}