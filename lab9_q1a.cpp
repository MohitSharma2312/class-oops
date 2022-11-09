/* 1.(i) WAP to create a class employee that stores the grade (A,B or C) and monthly salary of an employee. Overload the unary increment and decrement operator
using member function and friend function respectively where the pre form of the unary operator is applied.
(ii) In the above example, perform the post decrement using friend function and pre increment using member function and display the values.
 
*/#include <iostream>
using namespace std;

class employee
{
    public:
    char grade;
    float salary;
    void input()
    {
        cout << "Enter the grade of the employee" << endl;
        cin >> grade;
        cout << "Enter the salary of the employee" << endl;
        cin >> salary;
    }
    void display()
    {
        cout << "The grade of the employee is " << grade << endl;
        cout << "The salary of the employee is " << salary << endl;
    }
    employee operator ++()  // unary increment using member
    {
        employee a;
        a.salary = ++salary;
        return a;
    }
    friend employee operator --(employee &e)  // unary decrement using friend
    {
        employee a;
        a.salary = --e.salary;
        return a;
    }
    employee operator ++(int)  // post increment using member
    {
        employee a;
        a.salary = salary++;
        return a;
    }
    friend employee operator --(employee &e,int)  // post decrement using friend
    {
        employee a;
        a.salary = e.salary--;
        return a;
    }
};

int main()
{
    employee e;
    e.input();
    e.display();
    ++e;
    e.display(); 
    e++;
    e.display();
    --e;
    e.display();
    e--;
    e--;
    e.display();
    return 0;
}  