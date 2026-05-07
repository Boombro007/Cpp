#include<iostream>
using namespace std;
template <class T>
class complex{
    int a;
    public:
    void getdata(T a1)
    {
        a = a1;
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int main()
{
    complex <int> t;
    t.getdata(3);
    t.display();
    return 0;
}