#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;
        int arr[N];
        int maxi = INT_MIN;
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        cout << maxi << endl;

    }
    return 0;
}