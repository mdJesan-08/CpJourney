#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int mxOm = 0, mxAddy = 0, cnt = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] != 0) cnt++;
            else
            {
                mxOm = max(cnt, mxOm);
                cnt = 0;
            }
            
        }

        mxOm = max(cnt, mxOm);
        cnt = 0;

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i] != 0) cnt++;
            else
            {
                mxAddy = max(cnt, mxAddy);
                cnt = 0;
            }
        }

        mxAddy = max(cnt, mxAddy);
        if( mxOm == mxAddy) cout << "Draw" << endl;
        else cout <<((mxOm > mxAddy) ? "Om" : "Addy") << endl;
        
    }
    
	// your code goes here

}
