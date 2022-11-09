#include<iostream>
using namespace std;

class student
{
    int rollno;
    int age;
    char name[20];
    int marks[4];
public:
    void getdata(){
        cout<<"\nEnter the name: ";
        cin>>name;
        cout<<"\nEnter the roll no: ";
        cin>>rollno;
        cout<<"\nEnter the age: ";
        cin>>age;
        cout<<"\nEnter the marks: ";
        for(int i=0;i<4;i++)
        {
            cin>>marks[i];
        }
    }
    void display()
    {
        cout<<"\nName of the student: "<<name;
        cout<<"\nRoll no of the student: "<<rollno;
        cout<<"\nAge of the student: "<<age;
        cout<<"\nMarks of the student: ";
        for(int i=0;i<4;i++)
        {
            cout<<marks[i]<<" ";
        }
    }
    friend void higher(student s1,student s2);
};

void higher(student s1,student s2)
{
    int sum1=0,sum2=0;
    for(int i=0;i<4;i++)
    {
        sum1=sum1+s1.marks[i];
        sum2=sum2+s2.marks[i];
    }
    if(sum1>sum2)
    {
        cout<<"\n\nThe student with higher average marks is: ";
        s1.display();
    }
    else
    {
        cout<<"\n\nThe student with higher average marks is: ";
        s2.display();
    }
}

int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.display();
    s2.display();
    higher(s1,s2);
    return 0;
}