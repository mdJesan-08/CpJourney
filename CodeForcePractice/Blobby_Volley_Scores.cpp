#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string s;
        int size;
        cin >> size >> s;
        char serving = 'A';
        int scoreA = 0, scoreB = 0, i = 0;

        while(i < size)
        {
            if(s[i] == 'A' && serving == 'A') scoreA +=1;
            else if(s[i] == 'B' && serving == 'A') serving = 'B';
            else if(s[i] == 'B' && serving == 'B') scoreB +=1;
            else serving = 'A';
            i++;
        }

        cout << scoreA << " " << scoreB << endl;
    }

    return 0;
}