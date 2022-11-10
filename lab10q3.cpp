/*3. Write a program to create a class employee that stores the name basic salary and
the grade of an employee overload the new operator to allocate memory and then
stores the value and also overload the delete operator to deallocate the memory and
also add user defined constructor and destructor in the program.Using necessary
conversion function assign the name of the employee to a system defined and display
it.*/



#include <iostream>
using namespace std;
class employee{
    string name;
    int basic_sal;
    char grade;
    public:
    void *operator new(size_t size){
        void *p = malloc(size);
        return p;
    }
    void operator delete(void *k){
        free(k);
    }
    employee(){
        cout<<"Zero Arg constructor"<<endl;
        cout<<"Enter Name of employee: ";
        cin>>name;
        cout<<"Enter Basic Salary: ";
        cin>>basic_sal;
        cout<<"Grade of employee: ";
        cin>>grade;
    }
    employee(string n, int b, char g){
        cout<<"Parameterized constructor"<<endl;
        name = n;
        basic_sal = b;
        grade = g;
    }
    employee(employee &k){
        cout<<"Copy constructor"<<endl;
        name = k.name;
        basic_sal = k.basic_sal;
        grade = k.grade;
    }
    operator string(){
        return name;
    }
    ~employee(){
        cout<<"Destructor"<<endl;
    }
};
int main()
{
    employee *e1 = new employee;
    string n;
    n = (*e1);
    cout<<endl<<"Name of Employee is "<<n<<endl;
    delete e1;
    return 0;
}