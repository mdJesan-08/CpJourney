#include<bits/stdc++.h>

class Student
{
    public:
        int roll;
        char section;
    
    Student(int roll,char section)
    {
        this->roll = roll;
        this->section = section;
        std::cout << "Constructor Called Hello" << std::endl;
    }
};


Student* fun()
{
 
    Student* p = new Student(45,'A');
    return p;
}

int main()
{
    Student* p = fun();
    std::cout << p->roll << p->section << std::endl;
    return 0;
}