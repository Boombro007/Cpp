#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str = "Bhavya";
    // cout<<"Enter a string : ";
    // cin>>str;
    ofstream out("write1.txt");
    out<<str;
    return 0;
}