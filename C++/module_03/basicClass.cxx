#include<bits/stdc++.h>

class Student
{
    public:
        int roll;
        char Section;
};

int main()
{
    Student Samrin;
    Samrin.roll = 25;
    Samrin.Section = 'A';

    std::cout << Samrin.roll << " " << Samrin.Section << std::endl;
    return 0;
}