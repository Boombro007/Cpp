#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f1("File1.txt");
    f1<<"This is my first file\n";
    f1<<"Great  that this happened!!\n";
    f1.close();
    return 0;
}