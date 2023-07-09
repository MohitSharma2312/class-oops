#include<iostream> 
using namespace std; 

class Bank 
{ 
    int principal; 
    int years; 
    float rate; 
public: 
    Bank(int p, int y) 
    { 
        principal = p; 
        years = y; 
        rate = 8.5; 
    } 
    void setRate(float r) 
    { 
        rate = r; 
    } 
    float getSimpleInterest() 
    { 
        float si; 
        si = (principal * years * rate) / 100; 
        return si; 
    } 
    Bank operator +(float r) 
    { 
        Bank temp(principal, years); 
        temp.rate += r; 
        return temp; 
    } 
    void display() 
    { 
        cout << "Principal: " << principal << endl; 
        cout << "Years: " << years << endl; 
        cout << "Rate of Interest: " << rate << endl; 
    } 
}; 

int main() 
{ 
    int p, y; 
    float r; 
    cout << "Enter the principal amount: "; 
    cin >> p; 
    cout << "Enter the number of years: "; 
    cin >> y; 
    Bank b(p, y); 
    cout << "The simple interest is: " << b.getSimpleInterest() << endl; 
    cout << "\nEnter the rate of interest to be added: "; 
    cin >> r; 
    try
    { 
        if (r <= 0) 
            throw "Rate of interest cannot be negative or zero"; 
        b = b + r; 
        b.display(); 
        cout << "The simple interest is: " << b.getSimpleInterest(); 
    } 
    catch (const char* msg) 
    { 
        cerr << msg << endl; 
    } 
    return 0;
}