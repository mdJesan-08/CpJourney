#include<stdio.h>


void odd_even()
{  
    int size ;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    } 
    int evens = 0, odds = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0) evens++;
        else odds++;
    }
    
    printf("%d %d",evens,odds);

    
}

int main()
{

    odd_even();

    return 0;


}