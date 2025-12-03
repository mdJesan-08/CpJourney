#include<bits/stdc++.h>



bool findJessica(std::string s, std::string target)
{
    std::stringstream ss(s);

    std::string word;
    while(ss>>word)
    {
        if( word == target) return 1;

    }
    return 0;

}

int main()
{

    std::string s;
    getline(std::cin,s);

    std::string target = "Jessica"; 



    std::cout << (findJessica(s, target) ? "YES" : "NO");


    return 0;

}
