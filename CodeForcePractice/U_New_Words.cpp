#include<bits/stdc++.h>



char lowToUp(char ch)
{
   return (ch >= 'a' && ch <= 'z') ? ch - 'a' +'A' : ch;
}

int main()
{
  
    std::string s;
    std::cin >> s;

    int freq[255]={0};

    for(int i = 0; i < s.size(); i++)
    {

        if(lowToUp(s[i]) == 'E' || lowToUp(s[i]) == 'Y' || lowToUp(s[i]) == 'G' || lowToUp(s[i]) == 'P' || lowToUp(s[i]) == 'T')
        {
            freq[lowToUp(s[i])] += 1;
        }
    }

    // std::cout << freq['E'] << " " << freq['Y'] << " "  << freq['G'] << " " << freq['P'] <<" " << freq['T'] << std::endl;
    std::cout << std::min(std::min(std::min(freq['G'], freq['P']), std::min(freq['E'], freq['Y'])),freq['T']);

    


    

    return 0;
}