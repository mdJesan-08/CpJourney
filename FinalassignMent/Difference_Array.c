#include<stdio.h>
#include<math.h>

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

void printArary(int arr[],int copyArr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ",abs(arr[i]-copyArr[i]));
    }

    printf("\n");
}


int main()
{
    int T;
    scanf("%d",&T);


    int cnt = 0;
    while(cnt < T)
    {
        int size;
        scanf("%d",&size);

        int arr[size];
        int copyArr[size];

        takeAndCopyArray(arr, copyArr, size);

        sortArray(copyArr,size);
        printArary(arr, copyArr, size);
        cnt++;

    }


    return 0;
}