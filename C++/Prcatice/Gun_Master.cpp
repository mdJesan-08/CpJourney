#include <bits/stdc++.h>
using namespace std;

void takeArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void minNoOfSwitches(int arr[], int n, int range)
{

    bool switched = false;
    int noOfswitch = 0;

    for(int i = 0; i < n; i++)
    {
        if(!switched)
        {
            if(arr[i] > range)
            {
                noOfswitch += 1;
                switched = true;

            }

        }
        else
        {
            if(arr[i] <= range)
            {
                noOfswitch += 1;
                switched = false;

            }
        }


    }
    
    std::cout << noOfswitch << std::endl;
	    

}


int main() 
{
    int T,cnt = 0;
	std::cin >> T;

	
	while(cnt < T)
	{
	    int n,range;
	    std::cin >> n >> range;

	    
	    int arr[n];
        takeArray(arr, n);

        minNoOfSwitches(arr, n, range);
        
        cnt++;
	}
	
	return 0;

}
