#include<iostream>
#include<cstdlib>
using namespace std;
class student
{
    int id;
    float marks[3];
    float per;
    char grade;
    float total=0;
    public:
    void getdata()
    {
        cout<<"Enter Your id : ";
        cin>>id;
        cout<<"Enter Marks of Three sessional : ";
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
            total += marks[i];
        }
    }
    void grading()
    {   
        per = (total / 108) * 100;
        if(per >= 90)
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
        for(int i=0;i<3;i++)
        {
            cout<<"MARKS - "<<i+1<<" : "<<marks[i]<<endl;
        }
        cout<<"PERCENTAGE : "<<per<<endl;
        cout<<"GRADE : "<<grade<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of student : ";
    cin>>n;
    student *p = new student[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n=== GETDATA ===\n";
        p->getdata();
        p->grading();
        cout<<"\n=== DISPLAY ===\n";
        p->display();
    } 
    return 0;
}