#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int N,Q;
    cin >> N >> Q;
    vector<long long int> arr(N+1);

    for(int i = 1; i < N+1; i++)
    {
        cin >> arr[i];
    }

    vector<long long int>  preSum(N+1);
    long long int sum = 0;
    preSum[0] = 0;
    for(int i = 1; i < N+1; i++)
    {
        sum += arr[i];
        preSum[i] = sum ;

    }
 


    while(Q--)
    {
        int l,r;
        cin >> l >> r;
    
        cout << preSum[r]-preSum[l-1] << endl;
    }

    return 0;
}