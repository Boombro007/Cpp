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
    int push(int x)
    {
        if(top <= 10)
        {
            top++;
            arr[top] = x;
            return 1;
        }
        else
        {
            return -1;
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
            return -1;
        }
    }
};

int main()
{
    Stack s;
    s.push(3);
    s.push(7);
    s.push(5);
    s.push(2);

    cout<<s.pop()<<endl; // 2
    return 0;
}