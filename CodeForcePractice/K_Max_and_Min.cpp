#include<bits/stdc++.h>


int main()
{
    int A,B,C;

    std::cin >> A >> B >> C;

    std::cout << std::min(std::min(A,B),C) << " " << std::max(std::max(A,B),C) << std::endl;

    return 0;

}\