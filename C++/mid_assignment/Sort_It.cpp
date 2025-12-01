#include<bits/stdc++.h>



void  arr_print(int arr[],int n)
{

    for(int i = 0; i < n; i++)
    {
       std::cout <<  arr[i] << " ";
    }

    std::cout << std::endl;
}

void sorted_print(int arr[],int n)
{

    std::sort(arr, arr + n);                 
    arr_print(arr,n);

    std::sort(arr, arr + n, std::greater<int>()); 
    arr_print(arr,n);
    
}

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
       std::cin >>  arr[i];
    }
    sorted_print(arr, n);
    
    return 0;
}