#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int d = 21,m = 12;
    ofstream fout;
    fout.open("write1.txt");
    fout<<d<<endl;
    fout<<m<<endl;
    fout.close();
    return 0;
}