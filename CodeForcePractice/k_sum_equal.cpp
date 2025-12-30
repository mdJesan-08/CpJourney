#include<bits/stdc++.h>
using namespace std;


void subarraySum(vector<int>& nums, int k) 
{
    int cnt = 0;
    vector<int> preSum(nums.size());
    // calculate prefix sum
    int sum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        preSum[i] = sum;

    }
    for(int i = 0; i < preSum.size(); i++)
    {
     
        cout << preSum[i] << " ";

    }
    for(int i = 0; i < preSum.size(); i++)
    {
        for(int j = i; j >= 0; j--)
        {
            
        }
    }
    
        
}

int main()
{
    vector<int> arr={1,1,1};
    int k = 2;
    subarraySum(arr, k);   
    return 0;
}
