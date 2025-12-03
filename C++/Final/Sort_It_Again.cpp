#include<bits/stdc++.h>



class Student
{
    public:
        std::string name;
        int cls;
        char sec;
        int id;
        int mathMarks;
        int engMarks;
        int sum;


};

bool cmp(Student a, Student b)
{
    if( a.engMarks > b.engMarks) return 1;
    else
    {
        if(a.engMarks == b.engMarks)
        {
            if( a.mathMarks > b.mathMarks) return 1;
            else
            {
                if(a.mathMarks == b.mathMarks) return a.id < b.id;
                return 0;

            }
        }
        return 0; 
    }
}

int main()
{
    int T,cnt = 0;

    std::cin >> T;

    Student arr[T];

    int sumArr[T];

    while (cnt < T)
    {
    
        std::cin >> arr[cnt].name >> arr[cnt].cls >> arr[cnt].sec >> arr[cnt].id >> arr[cnt].mathMarks >> arr[cnt].engMarks;

        arr[cnt].sum = arr[cnt].mathMarks + arr[cnt].engMarks;

        sumArr[cnt] = arr[cnt].sum;

       
        cnt++;
    }

    std::sort(arr, arr + T, cmp);
    
    for(int i = 0; i < T; i++)
    {
        std::cout << arr[i].name << " " <<  arr[i].cls << " " <<  arr[i].sec << " " << arr[i].id << " " << arr[i].mathMarks << " " << arr[i].engMarks << std::endl;
    }
  
    
    return 0;
}