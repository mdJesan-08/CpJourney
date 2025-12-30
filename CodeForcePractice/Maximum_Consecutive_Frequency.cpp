#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int maxNo;
    int maxi = INT_MIN;
    int i = 0, j = 0;
    int cnt = 0;
    while(j < size)
    {
        if(arr[i] == arr[j])
        {
            cnt++; j++;
        }
        else
        {
            // cout << arr[i] << " " << cnt << endl; 
            if(cnt > maxi) 
            {
                maxi = cnt;
                maxNo = arr[i];
                // cout << maxNo << " " << maxi << endl; 
            }
            cnt = 0;
            i = j;
        }
    }

    if(cnt > maxi) 
    {
        maxi = cnt;
        maxNo = arr[i];
        // cout << maxNo << " " << maxi << endl; 
    }

    cout << maxNo << " " << maxi << endl; 
    
    
    return 0;
}