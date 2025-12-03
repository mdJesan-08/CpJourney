#include<bits/stdc++.h>
using namespace std;

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int smallPair(int arr[], int size)
{
    
    int  pair_sum =  arr[0] + arr[1] + 1 - 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            pair_sum = std::min(pair_sum, arr[i] + arr[j] + j - i);
        }
    }

    return pair_sum;

}

int main()
{

    int T,cnt = 0;
    std::cin >> T;

    while( cnt < T)
    {
        int size;
    
        std::cin >> size;

        int arr[size];

        inputArray(arr, size);

        std::cout << smallPair(arr,size)  << std::endl;


        cnt++;
    }


    
    return 0;
}