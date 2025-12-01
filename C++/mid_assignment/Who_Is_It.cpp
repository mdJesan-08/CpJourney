#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        string name;
        char sec;
        int mark;

    void print()
    {
         std::cout << this->roll << " " << this->name << " "  << this->sec << " "  << this->mark;
    }

};

int main()
{
    int T;
    std::cin >> T;
    int cnt = 0;

    while(cnt < T)
    {
        Student s1,s2,s3;

        std::cin >> s1.roll >> s1.name >> s1.sec >> s1.mark;
        std::cin >> s2.roll >> s2.name >> s2.sec >> s2.mark;
        std::cin >> s3.roll >> s3.name >> s3.sec >> s3.mark;

        if(s1.mark >= s2.mark && s1.mark >= s3.mark) s1.print();

        else if(s2.mark >= s1.mark && s2.mark >= s3.mark)
        {
            if( s2.mark == s1.mark) s1.print();
            else s2.print(); 
        }
        else if(s3.mark > s1.mark && s3.mark > s2.mark) s3.print();


        std::cout << std::endl;
        cnt++;
    }
    return 0;
}