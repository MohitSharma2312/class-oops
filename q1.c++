    // #include <iostream>
    // using namespace std;
    // class student
    // {
    //     int roll;
    //     float avg;
    //     public:
    //     void input()
    //     {
    //         cout<<"enter the roll number and average mark of the student";
    //         cin>>roll>>avg;
    //     }
    //     void output()
    //     {
    //         cout<<"Roll Number = "<<roll<<" and average mark is "<<avg;
    //     }
    // };
    // int main()
    // {
    //     student s1,s2; //two instaces(objects) created
    //     s1.input();
    //     s1.output();

    //     return 0;
    // }
#include <iomanip>
#include <iostream>

int main() {
    auto time = std::time(nullptr);
    std::cout
        // ISO 8601: %Y-%m-%d %H:%M:%S, e.g. 2017-07-31 00:42:00+0200.
        << std::put_time(std::gmtime(&time), "%F %T%z") << '\n'
        // %m/%d/%y, e.g. 07/31/17
        << std::put_time(std::gmtime(&time), "%D"); 
        return 0;
}

