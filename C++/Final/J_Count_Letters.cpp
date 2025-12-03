#include<bits/stdc++.h>


int main()
{
    
    std::string s;
    
    std::cin >> s;
    int freq[255] = {0};
    for(int i = 0; i < s.size(); i++) 
    {
        freq[s[i]] += 1;
    }


    for(char ch = 'a'; ch  <= 'z'; ch++) 
    {
        if(freq[ch] > 0) std::cout << ch << " " << ": " << freq[ch] << std::endl;
    }
    return 0;
}