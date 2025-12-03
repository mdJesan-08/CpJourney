#include<bits/stdc++.h>
using namespace std;



bool isPalindrome(string s)
{
    int start = 0, end = s.size() - 1;

    while(start <= end)
    {
        if(s[start] == s[end])
        {
            start++;
            end--;
        }
        else return 0;
    

    } 
    return 1; 
}

int main()
{
    string s;
    
    std::cin >> s;

    std::cout << (isPalindrome(s) ? "YES" : "NO") << std::endl;
    
    return 0;
}