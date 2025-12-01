#include<stdio.h>

int main()
{
    int size,limit;
    scanf("%d %d",&size,&limit);
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);   
    }
    int cnt = 0;
    for(int j = 1; j <= limit; j++)
    {
        for(int i = 0; i < size; i++)
            {
                if(arr[i] == j)   cnt ++;
            } 
        printf("%d\n",cnt);
        cnt = 0;    
    }

}