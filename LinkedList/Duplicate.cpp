#include<bits/stdc++.h>
using namespace std;


void take_array(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}


bool dulicateFound(vector<int>& arr)
{
    map<long long int, int> hashMap;

    for(int i = 0; i < arr.size(); i++)
    {
        hashMap[arr[i]] += 1;
    }

    for(auto& pair : hashMap)
    {
        // cout << pair.first << " " << pair.second << "\n";
        if(pair.second >= 2) return 1;

    }

    for(auto& pair : hashMap)
    {
        cout << pair.first << " ";
        

    }
    return 0;

}


int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    take_array(arr);
    cout << (dulicateFound(arr) ? "YES" : "NO") << endl;
    return 0;
}