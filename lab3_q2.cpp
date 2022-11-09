// Write a program to add one static and one non static data member to user defined class and
// access them by static and non static member functions respectively.

#include <iostream>
using namespace std;
class abc{
    int a;
    static int n;
    public:
    void get(){
        cout<<"Enter the value of a "<<endl;
        cin>>a;
    }
    static void input(){
        cout<<"Enter the value of n "; 
        cin>>n;
    }
    void add(){
        cout<<"The sum is "<<a+n;
    }
    void show(){
        cout<<"A is "<<a<<endl;
    }
    static void display(){
        cout<<"K is "<<n<<endl;
    }
};
int abc:: n;

int main(){
    abc x;
    x.get();
    abc::input();
    x.show();
    abc::display();
    x.add();



}