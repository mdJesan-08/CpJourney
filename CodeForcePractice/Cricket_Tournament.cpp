#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
	    int N,M;
	    
	    cin >> N >> M;
	    int matchNo = 0;
        int remainTeam = N;
        while(remainTeam > 1)
        {
            matchNo += remainTeam / 2;
            remainTeam = remainTeam / 2 + remainTeam % 2;
        }
    
        cout << ((matchNo >= M)? "YES" : "NO") << endl;

        ceil

	}

    return 0;

}
