#include<iostream>
using namespace std;
class order
{
    int a;
    public:
    order()
    {
        a=21;
        cout<<"CONSTRUCTOR CALLED!!\n";
    }
    ~order()
    {
        a=12;
        cout<<"DESTRUCTOR CALLED!!\n";
    }
};
int main()
{
    cout<<"OUTSIDE THE BLOCK !!\n";
    order o1;
    order o2,o3;
    {
        cout<<"\nINSIDE THE BLOCK!!\n";
        order o4;
        order o5;
    }
    cout<<"\nBACK OUTSIDE!!\n";
    return 0;
}