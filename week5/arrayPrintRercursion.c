#include<stdio.h>

void printArray(int arr[],int size)
{   
  if(size == 0) return;
  printArray(arr,size-1);
  printf("%d ",arr[size-1]);


}

int main()
{
    int arr[] = {0,1,2,3,4,5,6};
    printf("\n");
    printArray(arr,7);
    printf("\n");
    return 0;
}