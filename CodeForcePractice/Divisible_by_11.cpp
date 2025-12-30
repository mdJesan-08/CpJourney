#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;
    long long int oddSum = 0;
    long long int flag = 1;

    while (n)
    {
        int digit = n % 10;
        // cout << digit << " ";
        n = n/10;
        sum += digit ;
        if(flag)
        {
            oddSum += digit;
            flag = 0;

        }
        else flag =1;

    }
    // cout << sum << " " << oddSum << " " <<  2*oddSum - sum << endl;
    if((2*oddSum - sum) % 11 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
      
    return 0;
}