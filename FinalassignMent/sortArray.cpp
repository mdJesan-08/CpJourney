#include<stdio.h>

void takeAndCopyArray(int arr[],int copyArr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        copyArr[i] = arr[i];

    }
}

void sortArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[i])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
}

void printArary(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}


int main()
{

    int size;
    scanf("%d",&size);
    int arr[size];
    int copyArr[size];
    takeAndCopyArray(arr, copyArr, size);
    printArary(arr, size);
    sortArray(copyArr, size);
    printArary(copyArr, size);

    return 0;

}