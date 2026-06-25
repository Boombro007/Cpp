#include<iostream>
using namespace std;

class Box
{
    private:
    int l;
    int b;
    int h;
    public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int l1,int b1,int h1)
    {
        l = l1;
        b = b1;
        h = h1;
    }
    Box operator<(Box b3)
    {
        Box t;
        if(l > b3.l && b > b3.b && h > b3.h)
            cout<<"B1 > B2\n";
        else
            cout<<"B1 < B2";
        return t;
    }
    // void display()
    // {
    //     cout<<l<<endl<<b<<endl<<h<<endl;
    // }
};

int main()
{
    Box b1(3 , 4, 6);
    Box b2(2 , 3, 4);
    Box b3;
    b3 = b1 < b2;
    // cout<<"B1 : \n";b1.display();
    // cout<<"B2 : \n";b2.display();
    return 0;
}