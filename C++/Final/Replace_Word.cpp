#include<bits/stdc++.h>



void repalceWithHash(std::string target, std::string token)
{

    while(target.find(token) != std::string::npos)
    {
        target.replace(target.find(token),token.size(),"#");

    }


    std::cout << target << std::endl;

}

int main()
{

    int T, cnt = 0;
    std::cin >> T;

    std::cin.ignore();


    while(cnt < T)
    {
        std::string s;
        getline(std::cin,s);

        std::stringstream ss(s);
        std::string target , token;

        ss >> target;
        ss >> token ;

        // std::cout << target << " " << token << std::endl ;

        repalceWithHash(target, token);


        cnt++;
    }

    return 0;

}
