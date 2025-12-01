#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    std::cin >> T;
    int cnt = 0;


    while(cnt < T)
    {    
        int size, target_sum;
        std::cin >> size >> target_sum;

        int arr[size];
    
        for(int i = 0; i < size; i++)
        {
            std::cin >> arr[i];
        }

        int flag = 0;

        for(int i = 0; i < size; i++)
        {
           for(int j = i+1; j < size; j++)
           {
            for(int k = j+1; k < size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target_sum)
                {
                   
                    flag = 1;
                    break;
                }
            }
           } 
        }

        if(flag == 1) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;


        cnt++;

    } 

    return 0;
}