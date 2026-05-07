//using pointer using Type - 1
#include<iostream>
using namespace std;

class Time
{
    private :
    int hours;
    int mins;
    public :
    void getdata();
    void display();
    void sum(Time *,Time *);
};

void Time :: getdata()
{
    cout<<"Enter hours : ";
    cin>>hours;
    cout<<"Enter Minutes : ";
    cin>>mins;
}

void Time :: display()
{
    cout<<hours<<" Hours and "<<mins<<" Minutes\n";
}

void Time :: sum(Time *t1,Time *t2)
{
    mins = t1->mins + t2->mins;
    hours = mins / 60;
    mins = mins % 60;
    hours = hours + t1->hours + t2->hours;
}

int main()
{
    Time T1,T2,T3;
    cout<<"Enter data of time - 1\n";
    T1.getdata();
    cout<<"Enter data of time - 2\n";
    T2.getdata();
    T3.sum(&T1,&T2);
    T1.display();
    T2.display();
    T3.display();
    return 0;
}