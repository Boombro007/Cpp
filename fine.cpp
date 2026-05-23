#include<iostream>
using namespace std;
class fine
{
    public:
    float atday;
    float abday;
    float tday;
    void getdata()
    {
        cout<<"Enter Atteneded days : ";
        cin>>atday;
        cout<<"Enter Total days : ";
        cin>>tday;
    }
    void display()
    {
        cout<<"ATTENED DAYS : "<<atday<<endl;
        cout<<"TOTAL DAYS : "<<tday<<endl;
    }
};
class eve : public fine
{
    float multi=0;
    float percen;
    public:
    void getdata()
    {
        fine :: getdata();
    }
    void cal()
    {
        abday = tday - atday;
        percen = (atday / tday) * 100;
        {
            if(percen >= 75 && percen <= 100)
                multi = 5;
            else if(percen >= 50 && percen <= 74.99)
                multi = 10;
            else if(percen >= 20 && percen <= 49.99)
                multi = 20;
            else
                cout<<"GO TO SWAMI\n";
        }
    }
    void display()
    {
        fine :: display();
        cout<<"TOTAL ABSENT : "<<abday<<endl;
        cout<<"FINE : "<<abday * multi<<endl;
    }
};
class mor : public fine
{
    float multi = 0;
    float percen;
    public:
    void getdata()
    {
        fine :: getdata();
    }
    void cal()
    {
        abday = tday - atday;
        percen = (atday / tday) * 100;
        {
            if(percen >= 50 && percen <= 100)
                multi = 3;
            else if(percen >= 25 && percen <= 49.99)
                multi = 10;
            else if(percen >= 20 && percen <= 24.99)
                multi = 20;
            else
                cout<<"GO TO SWAMI\n";
        }
    }
    void display()
    {
        fine :: display();
        cout<<"TOTAL ABSENT : "<<abday<<endl;
        cout<<"FINE : "<<abday * multi<<endl;
    }
};
int main()
{
    int ch;
    cout<<"MENU :\n1 - Evening\n2 - Moring\nEnter Your Option : ";
    cin>>ch;
    if(ch == 1)
    {
        eve e1;
        e1.getdata();
        e1.cal();
        e1.display();
    }
    else if(ch == 2)
    {
        mor m1;
        m1.getdata();
        m1.cal();
        m1.display();
    }
    else
        cout<<"INVALID OPTION\n";
    return 0;
}