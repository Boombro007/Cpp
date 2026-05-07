#include<iostream>
using namespace std;

class item
{
    char name[50];
    float age;
    public:
    void getdata()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Age : ";
        cin>>age;
    }
    item & item :: greater(item & x)
    {
        if(x.age >= age)
            return x;
        else
            return *this;
    }
    void display()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"AGE : "<<age<<endl;
    }
};

int main()
{
    item i1,i2;
    i1.getdata();
    i2.display();
    item i3 = i1.greater(i2);
    i1.display();
    i2.display();
    i3.display();
    return 0;
}