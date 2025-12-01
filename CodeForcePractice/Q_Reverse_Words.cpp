#include<bits/stdc++.h>


int main()
{
    std::string s;

    getline(std::cin, s);
    std::stringstream st(s);

    std::string word;
    
   
    st >> word;

    reverse(word.begin(), word.end());

    std::cout << word ;

    while(st >> word)
    {
        reverse(word.begin(), word.end());

        std::cout << " " << word ;
        
    }


    return 0;
}