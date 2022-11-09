// // #include<iostream>
// // using namespace std;
// // class StudentDetails{
// // 	private:
// // 		string name;
// // 		int roll_no;
// // 		int subject_marks[3];
// // 	public:
// // 		friend StudentDetails Compare(StudentDetails d);
// // 		void input(){
// // 			cout<<"Enter student name\n";
// // 			cin>>name;
// // 			cout<<"Enter student roll number\n";
// // 			cin>>roll_no;
// // 			cout<<"Enter the student's subject marks\n";
// // 			for(int i=0; i<3; i++){
// // 				cout<<"Subject "<<(i+1)<<endl;
// // 				cin>>subject_marks[i];
// // 			}
// // 		}
// // 		double average(){
// // 			double total = 0.0;
// // 				for(int i=0; i<3; i++){
// // 				total += subject_marks[i];
// // 			}
// // 			return total /3;
// // 		}
// // 		void display(){
// // 			cout<<"Student Name: \t"<<name<<endl;
// // 			cout<<"Student Roll No \t "<<roll_no<<endl;
// // 			cout<<"The marks of the student are:\n";
// // 			for(int i=0; i<3; i++){
// // 				cout<< subject_marks[i]<<endl;
// // 			}
// // 		}
// // };
// // StudentDetails Compare(StudentDetails d, StudentDetails newStudent){
	
// // 	if(newStudent.average() > d.average() ){
// // 		return newStudent;
// // 	}
// // 	else{
// // 		return d;
// // 	}
// // }
// // int main(){
// // 	cout<<"Enter the details for student: 1\n";
// // 	StudentDetails st1, st2, st3;
// // 	st1.input();
// // 	cout<<"Enter the details for student: 2\n\n\n";
// // 	st2.input();
// // 	st3 = Compare(st1, st2);
// // 	cout<<"The details of the student with higher average mark are: \n";
// // 	st3.display();
// // }
// #include<iostream>
// using namespace std;
// class Point {
// public:
//     Point() { cout << "Constructor called"; }
// };
 
// int main()
// {
//    Point t1, *t2;
//    return 0;
// }
#include <iostream>
class Test
{
public:
    int i;
    void get();
};
void Test::get()
{
    std::cout << "Enter the value of i: ";
    std::cin >> i;
}
Test t;  // Global object
int main()
{
    Test t;  // local object
    t.get();
    std::cout << "value of i in local t: "<<t.i<<'n';
    ::t.get(); 
    std::cout << "value of i in global t: "<<::t.i<<'n';
    return 0;
}