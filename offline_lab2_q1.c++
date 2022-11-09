//write a prog to create a class student having name,roll number and subject mark as its member .Initialise the details of student at the time of creation where the name and subject marks are decided at 
#include <iostream>
#include<string.h>
using namespace std;
class student
{
    string name;
    int roll ,marks;
    public:
    void show ()
    {
        cout<<"roll="<<roll<<"\tName"<<name <<"\tmarks"<<marks<<endl;
    
    }
    student (){
        
};
student(int xkm  )