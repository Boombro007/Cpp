#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
    int age;
    string name;
    public:
    virtual void getdata()
    {
        cin>>ws>>name;
        cin>>ws>>age;
    }
    virtual void putdata()
    {
        cout<<name<<" "<<age<<" ";
    }
};
class Professor : public Person
{
    int publications;
    // int cur_id = 0;
    public:
    static inline int cur_id = 1;
    Professor()
    {
        // cur_id++;
    }
    void getdata() 
    {
        Person :: getdata();
        cin>>ws>>publications;
        // cur_id++;
    }
    void putdata() override
    {
        Person :: putdata();
        cout<<publications<<" "<<cur_id<<endl;
        cur_id++;
    }
};
class Student : public Person
{
    int marks[6];
    // int cur_id = 0;
    int total = 0;
    public:
    static inline int cur1_id = 1;
    Student()
    {
        //   cur1_id++;  
    }
    void getdata() 
    {
        Person :: getdata();
        for(int i=0;i<6;i++)
        {
            cin>>ws>>marks[i];
            total += marks[i];
        }
        
    }
    void putdata() override
    {
        Person :: putdata();
        cout<<total<<" "<<cur1_id<<endl;    
        cur1_id++;
    }
};


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
