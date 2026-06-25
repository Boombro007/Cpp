#include<iostream>
#include<fstream>
using namespace std;

class inte
{
    protected:
    int a;
    int b;
    public:
    void getnum()
    {
        cout<<"Enter first number :";
        cin>>a;
        cout<<"Enter second number :";
        cin>>b;
    }
};

class compa : public inte
{
    protected:
    int c;
    public:
    compa()
    {
        inte :: getnum();
        if(a > b)
            c = 1;
        else
            c = 0;
    }
    int getc()
    {
        return c;
    }
};

int main()
{
    compa c1;
    ofstream ptr;
    ptr.open("Readings.txt");
    if(c1.getc() == 0)
    {
        ptr<<"A is less than B\n";
    }
    else
    {
        ptr<<"A is greater than B\n";
    }
    return 0;
}