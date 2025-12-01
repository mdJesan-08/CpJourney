#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::string s;
    std:cin >> s;

   int i = 0;
    while(i < s.size()-4)
    {
        if(s.substr(i, 5) == "EGYPT")
        {
            s.replace(i, 5, " ");
            i++;
        } 
        else i++;

    }

    std::cout << s << std::endl;

    return 0;
}