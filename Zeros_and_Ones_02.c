#include <stdio.h>

int main()
{
    int size,X;
    scanf("%d",&size);
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);   
    }

    scanf("%d",&X);

    for(int i = 0; i < size; i++)
    {
        if(i == X-1) printf("%d ",!arr[i]);
        else printf("%d ",arr[i]);
    }
    


}