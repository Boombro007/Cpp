#include<iostream>
#include<cstring>
using namespace std;
class integer
{
    int id;
    string name;
    int marks[3];
    public:
    integer()
    {}
    integer(int a1,string n1,int mark[])
    {
        id = a1;
        name = n1;
        for(int i=0;i<3;i++)
        {
            marks[i] = mark[i];
        }
    }
    void print()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<marks[i]<<endl;
        }
    }
};
int main()
{
    int a2;
    string n2;
    int mar[3];
    cout<<"Enter a id to print using const. : ";
    cin>>a2;
    cout<<"Enter a name to print using const. : ";
    cin>>n2;
    cout<<"Enter marks of three sessionals : ";
    for(int i=0;i<3;i++)
    {
        cin>>mar[i];
    }
    integer i1(a2,n2,mar);
    i1.print();
    return 0;
}