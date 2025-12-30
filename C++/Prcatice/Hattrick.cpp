#include <bits/stdc++.h>
using namespace std;


int hatTrickFind(std::string arr[], int n)
{

    for(int i = 0; i <= 4; i++)
    {
        string sum = arr[i] + arr[i+1] + arr[i+2];
        if( sum == "WWW" ) return 1;
    }

    return 0;
  
}


int main() {
	// your code goes here
	
	int T;
	
	std::cin >> T;
	
	int cnt = 0;
	
	while(cnt < T)
	{
	    int noOfBall = 6;
	    
	    std::string arr[noOfBall];
	    
	    for(int i = 0; i < noOfBall; i++)
	    {
	        std::cin >> arr[i];
	    }

        std::cout << ( hatTrickFind(arr, noOfBall) == 1 ?  "YES" :  "NO" ) << std::endl;

	    
	    cnt++;
	}
	
	return 0;

}
