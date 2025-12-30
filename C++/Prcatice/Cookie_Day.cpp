#include <bits/stdc++.h>
using namespace std;

void takeArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void minNoOfWasted(int arr[], int n, int childNo)
{
    int wasted = INT_MAX;
    bool given = false;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] / childNo)
        {
            wasted = min(arr[i] % childNo,wasted);
            given = true;
        }
    }
    std::cout << (wasted == INT_MAX ? -1 : wasted) << std::endl;
}


int main() 
{
    int T,cnt = 0;
	std::cin >> T;

	
	while(cnt < T)
	{
	    int n,childNo;
	    std::cin >> n >> childNo;

	    
	    int arr[n];
        takeArray(arr, n);

        minNoOfWasted(arr, n, childNo);
        
        cnt++;
	}
	
	return 0;

}
