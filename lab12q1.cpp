/*1. WAP to copy the contents of one file to another file in reverse order */


// WAP to copy the contents of one file to another file in reverse order

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fin.close();
    fin.open("input.txt");
    fout.open("xyz.txt");
    while (getline(fin, str))
    {
        for (int i = str.length() - 1; i >= 0; i--)
        {
            fout << str[i];
        }
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}