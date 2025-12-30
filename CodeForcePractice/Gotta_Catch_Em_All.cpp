#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, normP, masP;

        cin >> N >> normP >> masP;

        int arr[N];

        int minCoins = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if(arr[i] * normP > masP) minCoins += masP;
            else minCoins += arr[i] * normP;
        }

        cout << minCoins << endl;

        
    }
    return 0;
}