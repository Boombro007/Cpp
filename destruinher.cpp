#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        a = 21;
        cout<<"A constructor\n";
    }
    ~A()
    {
        a = 0;
        cout<<"A destructor\n";
    }
};
class B : public A
{
    int b;
    public:
    B()
    {
        b = 12;
        cout<<"B constructor\n";
    }
    ~B()
    {
        b = 0;
        cout<<"B destructor\n";
    }
};
int main()
{
    cout<<"CLASS - A\n";
    A a1;
    cout<<"CLASS - B\n";
    B b1;
    return 0;
}