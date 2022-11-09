// defining the constructor outside the class

#include <iostream>
using namespace std;
class student {
public:
	student();
	void display();
};

student::student()
{
	cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
}

//void student::display()
//{
//	cout << endl ;
//}

int main()
{
	student s;
//	s.display();

	return 0;
}
