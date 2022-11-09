// Write a program in C++ that uses the reference variable concept and demonstrate the function
// pass by reference method

#include <iostream>
using namespace std;
void var(int &m){
    m++;
}

int main(){
    int n=25;
    var(n);
    cout<<n;
    return 0;

}