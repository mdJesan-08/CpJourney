#include<bits/stdc++.h>


void min_pari_sum(int arr[], int size)
{
    int min_sum = INT_MAX;
    
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] + j -i < min_sum) min_sum = arr[i] + arr[j] + j -i ;
        }
    }

    std::cout << min_sum << std::endl;

}


void take_array(int arr[], int size )
{
    for(int i = 0; i < size; i++)
        {
             std::cin >> arr[i];  
        }

}

int main()
{
    int T ;
    std::cin >> T;
    
    int cnt = 0;
    while(cnt < T)
    {
        int N;
        std::cin >> N;
        int arr[N];

        take_array(arr, N);

        min_pari_sum(arr, N);
        cnt++;

    }
    return 0;
}