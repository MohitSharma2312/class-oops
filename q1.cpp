// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream gout;
//     string line;
//     gout.open("hello.txt");
//     while(gout){
//     getline(cin, line);
//     if (line == "-1")
// 			break;
//     gout << line << endl;
// }

// gout.close();
// ifstream fin;
// 	fin.open("hello.txt");
// 	while (getline(fin, line)) {
// 		cout << line << endl;
// 	}
// 	fin.close();
// 	return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char fp[30];
    ifstream inline;
    inline.open("hello.txt", ios::in);

    printf(inline);
    for (i=0;i<30;i++)
    {
        for (j=0;j<30;j++)
        if (j>i)
        printf(ifstream(fp[j]));
    }
    fin.close();
    fout.close();
    return 0;
}