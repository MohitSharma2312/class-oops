//array as a member of the class
#include <iostream>
using namespace std;
class student
{
    int roll;
    int mark[3]; //mark is an array of 3 integgers
    float avg;
    char name[15];
    public:
    void input() //this unction is defined inside class and treated as an inline function
    {
        cout<<"enter the roll number ";
        cin>>roll;
        for(int i =0;i<3;i++)
        {
            cout<<"enter the mark"<<endl;//endl is the manipulator..brings cursor to next inline
            cin>>mark[i];
        }
        cout<<"enter the name of the student ";
        cin>>name;
        return;
    }
    void output();//function output is declared only
   
};
 inline void student::output() //function output is defined here using scope resolution operator and is a non inline function
    {
        int sum = 0;
         for(int i =0;i<3;i++)
        {
           sum= sum+mark[i]; 
        }
        avg = sum/3.0;
        cout<<"Roll Number = "<<roll<<" Name is "<<name<<" and average mark is "<<avg;
    }
int main()
{
     student s1,s2; //two instaces(objects) created
     s1.input();
     s1.output();

    return 0;
}

