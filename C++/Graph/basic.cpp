#include<bits/stdc++.h>


int main()
{
    std::queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    std::cout << q.front() <<std::endl;

    std::cout << q.empty() <<std::endl;

    

    while( !(q.empty()) )
    {
        std::cout << q.front() << " " <<" ";
        q.pop();

    }
    std::cout << std::endl;

    std::queue<std::pair<int ,int>> q1;

    q1.push({1,2});
    q1.push({2,2});
    q1.push({3,2});

    std::pair <int,int> p = q1.front();
    // std:<< std::endl;
    std::cout << "{" << q1.front().first<<", " << q1.front().second <<"}"<< std::endl;

    while(!q1.empty())
    {
       std::cout << "{" << q1.front().first<<", " << q1.front().second <<"}"<<", ";
       q1.pop();
       
    }

    


    return 0;
}