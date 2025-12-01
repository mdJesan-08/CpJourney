#include<bits/stdc++.h>


int main()
{
    int T;

    std::cin >> T;

    int cnt = 0;

    while(cnt < T)
    {
        std::string s;
        std::cin >> s;
        if(s.size() > 10)
        { 
        //    string result = s[0] + s[s.size() -1];
           std::cout << s[0] << s.size()-2 << s[s.size() -1] << std::endl; 
        }
        else std::cout << s << std::endl;
        cnt++;
    }

    return 0;
}