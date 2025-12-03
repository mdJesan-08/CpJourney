#include<bits/stdc++.h>


int main()
{
    
 int T,cnt = 0;

    std::cin >> T;
    std::cin.ignore();

    while(cnt < T)
    {
        std::string s, s1, s2,result = "";
        getline(std::cin, s);
        
        std::stringstream ss(s);

        ss >> s1;
        ss >> s2;

        int i = 0, j = 0;

        while (i < s1.size() || j < s2.size())
        {
            if (i < s1.size()) result += s1[i];
            if (j < s2.size()) result += s2[i];
            i++;
            j++;
        }

        std::cout << result << std::endl;
        cnt++;
    }   


    return 0;

}