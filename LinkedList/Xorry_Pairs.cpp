#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, T;
    cin >> T;

    while(T--)
    {
        int cnt = 0;
        cin >> N;
        for(int i = 0; i <= N; i++)
        {
            for(int j = 0; j <= N; j++)   
            {
                // cout << "("  <<  i  << "," << j << ")" << endl;

                if( (i^j) == N && i + j == N )
                {
                    cout << "("  <<  i  << "," << j << ")" << endl;
                    cnt++;
                }
            }  
        }

        cout << cnt / 2 << endl;
    }
    
    

    return 0;
}