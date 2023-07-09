//q2)wap read the contents of a file print to monitor and also write to another file
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    char fileName[30], ch;
    fstream fp;
    cout<<"Enter the Name of File: "<<endl;
    gets(fileName); 
    fp.open(fileName, fstream::in );
    if(!fp)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    cout<<"\nContent of "<<fileName<<":-\n";
    while(fp>>ch)
        cout<<ch;
    fp.close();
    cout<<endl;
    return 0;
}