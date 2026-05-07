#include<iostream>
using namespace std;
class space
{
    int a;
    int b;
    public:
    void getdata(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    operator-()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    int p,q;
    cout<<"Enter Two numbers : ";
    cin>>p>>q;
    space s1;
    s1.getdata(p,q);
    s1.display();
    -s1;
    s1.display();
    return 0;
}