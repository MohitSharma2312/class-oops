//5. WAP to create a class student having certain details of a student. Using class template concept input the details of 2 students and display to output screen
#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int roll;
    string branch;

public:

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

template <class T>

void swapp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    student s1, s2;
    cout << "Enter details of student 1: " << endl;
    s1.getdata();
    cout << "\nEnter details of student 2: " << endl;
    s2.getdata();
    swapp(s1, s2);
    cout << "\nDetails of student 1: " << endl;
    s1.display();
    cout << "\nDetails of student 2: " << endl;
    s2.display();
    return 0; 
}
