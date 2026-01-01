#include<bits/stdc++.h>
using namespace std;


bool bagFind(vector<int>& arr, int W)
{  
    int N =  arr.size();
    for(int i = 0;i < N; i++)
    {
        int sum = 0;
        for(int j = i;j < N; j++)
        {
            sum += arr[j];
            if( W % sum == 0) return 1;
            if(sum > W ) break;

        }
    }

    return 0;
}

bool bagFind2(vector<int>& arr, int W)
{
    int i = 0, j = 0;
    int sum = 0;
    while( j < arr.size())
    {
        sum += arr[j];
        while( sum > W)
        {
            sum -= arr[i];
            i++;
        }
        
        if( W % sum == 0) return 1;
        j++;
    }

}


int main()
{
    int  N ,W;
    cin >> N >> W;
    vector<int> arr(N);

    for(int i = 0;i < N; i++)
    {
        cin >> arr[i] ;
    }

    // for(int i = 0;i < N; i++)
    // {
    //     cout << arr[i] << " " ;
    // }
    // cout << endl;
    

    // vector<int> preSum(N);
    // int sum = 0;
    // for(int i = 0;i < N; i++)
    // {
    //     sum += arr[i];
    //     preSum[i] = sum;
    // }

    // for(int i = 0;i < N; i++)
    // {
    //     cout << preSum[i] << " " ;
    // }
    // cout << endl; 
    
    cout << (bagFind2(arr, W) ? "YES" : "NO") << endl;


    
    return 0;
}