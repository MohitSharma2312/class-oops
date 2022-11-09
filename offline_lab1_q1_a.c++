#include <iostream>
using namespace std;

class student
{
    int rollno;
    char name[20];
    int age;
    
public:
    void getdata()
    {
        cout<<"Enter the roll no: ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        
    }
    void putdata()
    {
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        
    }
    
};
class marks 
{
    int marks[4];

public:
   void getdata()
    {
        for(int i=0;i<4;i++)
        {
            cout<<"Enter the marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void putdata()
    {
        for(int i=0;i<4;i++)
        {
            cout<<"Marks of subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }

};


void display(student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        s[i].putdata();
    }
}

int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
    }
    display(s,n);
    return 0;
}