#include<stdio.h>


int count_before_one(int arr[], int size)

{   int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == 1) return i;
    }

    return i;
}

int main()
{
    int size ;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",count_before_one(arr,size));


}