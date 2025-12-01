#include<bits/stdc++.h>


void reverse_arr(int arr[], int size)
{   
    int s = 0, e = size-1;
    while(s <= e)
    {
        std::swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";

    } 
    std::cout << std::endl;  
}

int main()
{
    int n;
    std::cin >> n;

    int arr[n] ; 
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];

    }

    reverse_arr(arr, n);
    print_arr(arr,n);
    
    return 0;
}