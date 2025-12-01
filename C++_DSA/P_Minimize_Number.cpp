#include<bits/stdc++.h>



void take_array(int arr[], int size )
{
    for(int i = 0; i < size; i++)
        {
             std::cin >> arr[i];  
        }

}

void least_operation(int arr[], int size)
{
    int result = 0;
    int flag = 0;
    while(1)
    {
        for(int i = 0; i < size; i++)
        {
            if(arr[i] % 2 == 0) arr[i] = arr[i] / 2;
            else
            {
                flag = 1;
                break;
            } 
        } 
        
        if(flag == 1) break;
        result += 1;
    }

    std::cout << result << std::endl;

}

int main()
{

    int N;
    std::cin >> N;
    int arr[N];

    take_array(arr, N);

    least_operation(arr, N);

    return 0;
}