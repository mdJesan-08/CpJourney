#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;

        int chocoNo = 0;

        chocoNo += N / 5;
        int wrapper =  N / 5;

        while(wrapper >= 3)
        {
            chocoNo += wrapper / 3;
            wrapper = wrapper / 3; 
        }

        cout << chocoNo  << endl ;
    }
    
    return 0;
}