#include <bits/stdc++.h>
using namespace std;


int minRoomRequired(int arr[], int n)
{
    int result = 0;
    
    for(int i = 0; i < n; i++)
    {
        result += (arr[i] % 2 == 0) ? arr[i]/2 : arr[i]/2 + 1;
    }
    
    return result;
}


int main() {
	// your code goes here
	
	int T;
	
	std::cin >> T;
	
	int cnt = 0;
	
	while(cnt < T)
	{
	    int n;
	    
	    std::cin >> n;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        std::cin >> arr[i];
	    }
	    
	    std::cout << minRoomRequired(arr, n) << std::endl;
	    
	    cnt++;
	}
	
	return 0;

}
