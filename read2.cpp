#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream r1("File2.txt");
    string s1;
    getline(r1,s1);
    getline(r1,s1);     
    r1.close();
    cout<<"From r2 : "<<s1;
    return 0;
}