#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str2;
    ifstream in("read1.txt");
    getline(in , str2);
    cout<<"Str2 : "<<str2<<endl;
    return 0;
}