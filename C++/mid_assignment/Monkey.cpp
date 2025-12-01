#include<bits/stdc++.h>



std::string str_space_remove(std::string s)
{
    std::string str = "";
    int i = 0;
    while(i < s.size())
    {

        if(s[i] != ' ') str += s[i];
        i++;

    }
    return str;
}

int main() {

 std::string s;

 while( std::getline(std::cin, s))
 {
   
    std::string str = str_space_remove(s);
    sort(str.begin(), str.end());
    std::cout << str  << std::endl;
 }

 

 return 0;

}
