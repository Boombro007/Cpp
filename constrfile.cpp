#include<iostream>
#include<fstream>
using namespace std;
class file
{   
    int id;
    string name;
    float marks[3];
    float per;
    float omarks;
    float total = 108;
    char grade;
    public: 
    file(){}
    file(int a,string n,float mar[]);
    void cal();
    void display();
    void writefile();
};
file :: file(int a,string n,float mar[])
{
    id = a;
    name = n;
    omarks = 0;
    for(int i=0;i<3;i++)
    {
        marks[i] = mar[i];
        omarks += marks[i];
    }
}
void file ::cal()
{
    per = (omarks / total) * 100;
    if(per >= 91 && per<=100)
    {
        grade = 'A';
    }
    else if(per >= 81 && per <= 90)
    {
        grade = 'B';
    }
    else if(per >= 71 && per <= 80)
    {
        grade = 'C';
    }
    else if(per >= 61 && per <= 70)
    {
        grade = 'D';
    }
    else if(per >= 51 && per <= 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
}
void file :: display()
{
    cout<<"\n---- DISPLAY ----\n";
    cout<<"NAME : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"SUBJECT - "<<i+1<<" : "<<marks[i]<<endl;
    }
    cout<<"OBTAINED MARKS : "<<omarks<<endl;
    cout<<"TOTAL : "<<total<<endl;
    cout<<"PERCENTAGE : "<<per<<endl;
    cout<<"GRADE : "<<grade<<endl;
}
void file :: writefile()
{
    cout<<"DATA STORED IN FILE !!!!\n";
    ofstream stu("studentfile.txt");
    stu<<"NAME : "<<name<<endl;
    stu<<"ID : "<<id<<endl;
    for(int i=0;i<3;i++)
    {
        stu<<"SUBJECT - "<<i+1<<" : "<<marks[i]<<endl;
    }
    stu<<"OBTAINED MARKS : "<<omarks<<endl;
    stu<<"TOTAL : "<<total<<endl;
    stu<<"PERCENTAGE : "<<per<<endl;
    stu<<"GRADE : "<<grade;
    stu.close();
}
int main()
{
    int a2;
    string n2;
    float m[3];
    cout<<"Enter ID : ";
    cin>>a2;
    cout<<"Enter NAME : ";
    cin>>n2;
    cout<<"Enter Marks of three sub : ";
    for(int i=0;i<3;i++)
    {
        cin>>m[i];
    }
    file f(a2,n2,m);
    f.cal();
    f.display();
    f.writefile();
    return 0;
}