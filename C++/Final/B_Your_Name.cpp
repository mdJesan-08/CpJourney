#include<bits/stdc++.h>



bool isMatched(std::string s1, std::string s2)
{
    int freq1[256] = {0}, freq2[256] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
      freq1[s1[i]] +=1;
      freq2[s2[i]] +=1;
    }

     for (char ch = 'a'; ch < 'z'; ch++)
     {
        if(freq1[ch] != freq2[ch]) return 0; 
     }

    return 1;
    
}

int main()
{
    int T,cnt = 0;
    std::cin >> T;


    std::cin.ignore();

    while( cnt < T)
    {
        int size;
    
        std::cin >> size;
        std::cin.ignore();

        std::string s, s1, s2;

        getline(std::cin,s);

        std::stringstream ss(s);

        ss>>s1;
        ss>>s2;

        std::cout << (isMatched(s1, s2) ? "YES" : "NO") << std::endl;
        cnt++;
    }  


    return 0;
}