#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

bool isPalindrome(int arr[],int  size)
{
    int start = 0, end = size- 1;

    while(start <= end)
    {
        if(arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else return 0;
    

    } 
    return 1; 
}

int main()
{
    int size;
    
    std::cin >> size;

    int arr[size];

    inputArray(arr, size);

    std::cout << (isPalindrome(arr,size) ? "YES" : "NO") << std::endl;
    
    return 0;
}