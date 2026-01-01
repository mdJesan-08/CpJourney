#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	float A_size = 10 * 10;
	float B_size = 15 * 15;
    float per_A_price, per_B_price;

	while(T--)
	{
	    int A, B;
	    cin >> A >> B;
        // cout << (A / A_size) << " " << (B/ B_size);
        per_A_price = (A / A_size) ;
        per_B_price = (B/ B_size) ;
        //  cout << (A / A_size) << " " << (B/ B_size);


	    if( per_A_price < per_B_price) cout << "Small" << endl;
        else if( per_B_price < per_A_price) cout << "Large" << endl;
        else if(per_B_price == per_A_price) cout << "Equal" << endl;
    }
    return 0;

}
