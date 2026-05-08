#include<iostream>
using namespace std;
class account
{
    int accno;
    string name;
    public:
    double balance = 100000;
    void getdata()
    {
        cout<<"=== ENTER DETAILS ===\n";
        cout<<"Enter Account number : ";
        cin>>accno;
        cout<<"Enter Name : ";
        cin>>name;
    }
    void display()
    {
        cout<<"\n=== DISPLAY ===\n";
        cout<<"ACCOUNT NUMBER : "<<accno<<endl;
        cout<<"NAME : "<<name<<endl;
    }
};
class withdraw : public account
{ 
    int withd;
    public:
    void getdata()
    {
        account :: getdata();
        cout<<"Enter Amount to Withdrawl (less than 20,000) : ";
        cin>>withd;
        balance -= withd;
    }
    void display()
    {
        account :: display();
        cout<<"BALANCE : "<<balance<<endl;
    }
};
class deposit : public account
{
    int depo;
    public:
    void getdata()
    {
        account :: getdata();
        cout<<"Enter amount to deposit : ";
        cin>>depo;
        balance += depo;
    }
    void display()
    {
        account :: display();
        cout<<"BALANCE : "<<balance<<endl;
    }
};
class show : public account
{
    public:
    void showb()
    {
        account :: getdata();
        account :: display();
        cout<<"BALANCE : "<<balance<<endl;
    }
};
int main()
{
    int ch;
    cout<<"1 - Withdraw\n2 - Deposit\n3 - Check balance\n";
    cin>>ch;
    if(ch==1)
    {
        withdraw w1;
        w1.getdata();
        w1.display();
    }
    else if(ch==2)
    {
        deposit d1;
        d1.getdata();
        d1.display();
    }
    else if(ch ==3)
    {
        show s1;
        s1.showb();
    }
    else
        cout<<"INAVLID OPTION\n";
    return 0;
}