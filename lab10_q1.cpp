// Q1) wap to create a class rupee that stores the amonunt of rupees at its private data member
// create another class dollar that stores the respective amount in dolllar as its private data member
// input the amount of dollar from keyboard and convert the respective amount in rupees and store that value to the
// rupees class and display it
// 1) perform the respective conversion by writing the casting operator function
//2) and also use the constructor method to perform the neccessary conversion and display it.



#include<iostream>
using namespace std;
class dollar;
class rupee
{
float r;
public:
rupee(){}
void set(){cout<<"ENTER THE RUPEES :";cin>>r;}
void disp(){cout<<"CONVERT TO RUPEES:"<<r;}
float get_r(){return r;}
rupee(dollar d1);
};
class dollar
{
float p;
public:
dollar(){}
dollar(rupee r1)
{
p=r1.get_r()/82.86;
}
void set(){cout<<"\nENTER THE dollar:";cin>>p;}
void disp(){cout<<"CONVERT TO dollar:"<<p;}
int get_p(){return p;}
};
rupee::rupee(dollar d1)
{
r=d1.get_p()*82.86;
}
int main()
{
rupee r1;
dollar d1;

r1.set();
d1=r1;
d1.disp();
d1.set();
r1=d1;
r1.disp();

}