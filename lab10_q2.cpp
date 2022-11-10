/* Q2) WAP to create a class length that stores the length unit in feet and inches input the total length in inches at the time of creation of the object
1)assign the length value of the respective object to a system defined unit that stores the length in feet and print the output
2)assign the total length unit that is store in a system defined varible to the object by using the necessary conversion funtion and display the length in feet and inches

Hint: add all the constructors and destructors.*/

#include<iostream>
#include<string>
using namespace std;

class Length
{
public:
	int feet;
	int inches;

	Length();
	Length(int, int);
	~Length();

	void setDetails();
	void showDetails();
};

int main()
{
	Length l1;

	cout << "Enter details for Object 1 : " << endl;
	l1.setDetails();

	cout << endl << "Details for Object 1 : " << endl;
	l1.showDetails();

	Length l2(4, 5);

	cout << endl << "Details for Object 2 : " << endl;
	l2.showDetails();

	return 0;
}

Length::Length()
{
	this->feet = 0;
	this->inches = 0;
}

Length::Length(int f, int i)
{
	this->feet = f;
	this->inches = i;
}

Length::~Length()
{

}

void Length::setDetails()
{
	cout << "Enter feet : ";
	cin >> this->feet;
	cout << "Enter inches : ";
	cin >> this->inches;
}

void Length::showDetails()
{
	cout << "Feet : " << this->feet << endl;
	cout << "Inches : " << this->inches << endl;
}