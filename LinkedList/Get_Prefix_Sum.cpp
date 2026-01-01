#include<bits/stdc++.h>
using namespace std;

void take_array(vector<long long int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void reverse_print_aray(vector<long long int>& arr)
{
    for (int i = arr.size()-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<long long int> arr(N);
    
    take_array(arr);
    vector<long long int> preSum(N);
    long long int sum = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        preSum[i] = sum;

    }

    reverse_print_aray(preSum);
    

    
    return 0;
}