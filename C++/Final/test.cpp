#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "rahimisagoodguy good";


    while(s.find("good") != std::string::npos)
    {
        s.replace(s.find("good"),4,"#");

    }

    std::cout << s;

    // std::cout << s.find("l") << std::endl;
    // std::cout << s.replace(s.find("l"),1,"#") << std::endl;
    // std::cout << s.replace(s.find("l"),1,"#");

    // std::cout << s.find("l") << std::endl;
    // std::cout << s.find('l') << std::endl;

    return 0;
}