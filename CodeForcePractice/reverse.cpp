#include <iostream>
using namespace std;

string reverse(string s)
{
    int start = 0, end = s.size()-1;

    while(start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

int main() {

    string s;
    cin >> s;

    s[0] = 'a' + (s[0] - 'A');
    cout << reverse(s);
    return 0;
}
