#include<iostream>
using namespace std;

class Stack
{
    int top;
    int arr[10];
    public:
    Stack()
    {
        top = -1;
    }
    int Push(int x)
    {
        if(top < 10)
        {
            top++;
            arr[top] = x;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int pop()
    {
        if(top >= 0 && top < 10)
        {
            int r = arr[top];
            top--;
            return r;
        }
        else    
        {
           return 0;
        }
    }
    int isEmpty()
    {  
        if(top > 10)
            return true;
        else
            return false;
    }
    int isFull()
    {
        if(top == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack s;
    cout<<"Is empty : "<<s.isEmpty()<<endl;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    cout<<"Element : "<<s.pop()<<endl;
    cout<<"Is Full : "<<s.isFull()<<endl;
    return 0;
}