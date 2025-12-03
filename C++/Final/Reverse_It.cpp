#include<bits/stdc++.h>



class Student
{
    public:
        std::string name;
        int cls;
        char sec;
        int id;


};


int main()
{
    int T,cnt = 0;

    std::cin >> T;

    Student arr[T];

    while (cnt < T)
    {
        /* code */
        std::cin >> arr[cnt].name >> arr[cnt].cls >> arr[cnt].sec >> arr[cnt].id ;

       
        cnt++;
    }

    int start = 0, end = T -1;


    while(start <= end)
    {
        std::swap(arr[start].sec, arr[end].sec);
        start++;
        end--;

    }
    
    for(int i = 0; i < T; i++)
    {
        std::cout << arr[i].name << " " <<  arr[i].cls << " " <<  arr[i].sec << " " << arr[i].id <<std::endl;
    }
  
    
    return 0;
}