#include<bits/stdc++.h>


bool helloFind(std::string s)
{
    std::string target = "hello",sub_str;
    for(int i = 0; i <s.size(); i++)
    {
       sub_str = "";
      for(int j = i; j < s.size(); j++)
      {
        sub_str += s[j];
        if(sub_str == target) return 1;

      }
    } 
    return 0;
}


int main()
{
    std::string s;

    std::cin >> s;

    std::cout << (helloFind(s) ? "YES" : "NO");
    return 0;
}