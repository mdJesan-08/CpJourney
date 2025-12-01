#include<bits/stdc++.h>



void  arr_print(int arr[],int n)
{

    for(int i = 0; i < n; i++)
    {
       std::cout <<  arr[i] << " ";
    }

    std::cout << std::endl;
}

int* sort_it(int n)
{
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
       std::cin >>  arr[i];
    }

    std::sort(arr, arr + n, std::greater<int>()); 
    return arr;
}

int main()
{
    int n;
    std::cin >> n;


    int* arr = sort_it(n);
    
    arr_print(arr, n);
    return 0;
}