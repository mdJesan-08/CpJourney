#include<bits/stdc++.h>




void take_arr(int arr[], int n)
{

    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];

    }
}


int find_max(int arr[],int n)
{

    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];

    }
    return max;

}

int main()
{
    int n;
    std::cin >> n;

    int arr[n]; 
    take_arr(arr, n);

    std::cout << find_max(arr, n) <<std::endl;
    return 0;
}