#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    public:
    void input()
    {
        cout<<"enter the roll number and average mark of the student";
        cin>>roll>>avg;
    }
    void output()
    {
        cout<<"Roll Number = "<<roll<<" and average mark is "<<avg;
    }
};
int main()
{
     student s1,s2; //two instaces(objects) created
     s1.input();
     s1.output();

    return 0;
}

