#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, Q;
    
    cin >> N >> M >> Q;

    int arr[N][M];

    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    while(Q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        int treasure = 0;
        for(int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
               treasure += arr[i][j];
            }
            
        }
        
        cout << treasure << endl;      
    }
    return 0;
}