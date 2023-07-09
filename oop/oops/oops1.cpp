#include <iostream>
using namespace std;

class employee
{
private:
    int girl1, girl2, girl3;

public:
    int father, mother;
    void setdata(int a1, int b1, int c1)
    {
        girl1 = a1;
        girl2 = b1;
        girl3 = c1;
    }
    void getdata()
    {
        cout << "the value of girl1 is " << girl1 << endl;
        cout << "the value of girl2 is " << girl2 << endl;
        cout << "the value of girl3 is " << girl3 << endl;
        cout << "fatehrs name " << father << endl;
        cout << "mother name " << mother << endl;
    }
};

int main()
{
    employee harry;
    harry.father = 2;
    harry.mother = 5;
    harry.setdata(1, 2, 3);
    harry.getdata();
    return 0;
}