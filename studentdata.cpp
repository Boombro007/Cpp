#include<iostream>
#include<fstream>
using namespace std;
class student 
{
    float id;
    string name;
    string branch;
    float marks[3];
    float total = 108;
    float omarks = 0;
    float per;
    char grade;
    public:
    void getdata()
    {
        cout<<"Enter ID : ";
        cin>>ws>>id;
        cout<<"Enter NAME : ";
        getline(cin>>ws,name);
        cout<<"Enter BRANCH : ";
        getline(cin>>ws,branch);
        cout<<"Enter MARKS of 3 sessionals (less than : 36): \n";
        for(int i=0;i<3;i++)
        {
            cin>>ws>>marks[i];
            omarks += marks[i];
        }
    }
    void cal()
    {
        per = (omarks / total) * 100;
        if(per >= 91 && per <= 100)
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
    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"BRANCH : "<<branch<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"MARKS - "<<i+1<<" : "<<marks[i]<<endl;
        }
        cout<<"OBTAINED MARKS : "<<omarks<<endl;
        cout<<"TOTAL MARKS : "<<total<<endl;
        cout<<"PERCENTAGE : "<<per<<endl;
        cout<<"GRADE : "<<grade<<endl;
    }
    void writefile()
    {
        ofstream stu("Student details.txt");
        stu<<"ID : "<<id<<endl;
        stu<<"NAME : "<<name<<endl;
        stu<<"BRANCH : "<<branch<<endl;
        for(int i=0;i<3;i++)
        {
            stu<<"MARKS - "<<i+1<<" : "<<marks[i]<<endl;
        }
        stu<<"OBTAINED MARKS : "<<omarks<<endl;
        stu<<"TOTAL MARKS : "<<total<<endl;
        stu<<"PERCENTAGE : "<<per<<endl;
        stu<<"GRADE : "<<grade<<endl;
        stu.close();
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.cal();
    s1.display();
    return 0;
}