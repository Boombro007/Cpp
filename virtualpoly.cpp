#include<iostream>
using namespace std;
class base
{
    public:
    int b;
    void display()
    {
        cout<<"\nBase show\n";
    }
    virtual void show()
    {
        cout<<"\nBase show\n";
    }
};
class derived : public base
{
    public:
    int d;
    void display()
    {
        cout<<"\nBase show\n";
    }
    void show()
    {
        cout<<"\nBase show\n";
    }
};
int main()
{
    base *bptr;
    base b;
    bptr = &b;
    bptr -> display();
    derived d;
    derived *dptr;
    dptr = &d;
    dptr -> show();
    return 0;
}