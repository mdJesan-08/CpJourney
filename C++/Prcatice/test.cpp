#include<bits/stdc++.h>
using namespace std;

int main()
{
    int noOfBall = 6;
    
    string  arr[noOfBall];
    
    for(int i = 0; i < noOfBall; i++)
    {
        std::cin >> arr[i];
    }

    for(int i = 0; i < noOfBall; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl; 

    for(int i = 0; i <= 3 ; i++)
    {
    std::cout << arr[i] + arr[i+1] + arr[i+2] << std::endl;        
    }
   
    
 
    return 0;
}