#include<iostream>
using namespace std;
template <class B>
class BDate
{
    int d,m,y;
    public:
    BDate (int a,int b,int c)
    {
        d = a;
        m = b;
        y = c;
    }
    void display()
    {
        cout<<"\n BirthDate : "<<d<<"/"<<m<<"/"<<y<<endl;
    }
};
int main()
{
    int da,mt,yr;
    cout<<"Enter Your Birthdate in (dd/mm/yyyy) : ";
    cin>>da>>mt>>yr;
    BDate <int> d1(da,mt,yr);
    d1.display();
    return 0;
}