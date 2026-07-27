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
        if(top < 10)
        {
            top++;
            arr[top] = x;
            return 1;
        }
        else
            return 0;
    }
    int pop()
    {
        int r;
        if(top>=0 && top<10)
        {
            r = arr[top];
            top--;
            return r;
        }
        else
            return 0;
    }
};

class Node
{
    public:
    Node *link;
    int data;
    Node(int d)
    {
        data = d;
        link = NULL;
    }
};

class LinkedList
{
    Node *first;
    public:
    LinkedList()
    {
        first = NULL;
    }
    int Insert(int d)
    {
        if(first == NULL)
        {
            first = new Node(d);
            return 1;
        }
        else
        {
            Node *temp = first;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            Node *nn = new Node(d);
            temp->link = nn;
            return 1;
        }
    }
    int Print()
    {
        Node *temp = first;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->link;
        }
        cout<<"NULL\n";
        return 1;
    }
    int Rev()
    {
        Stack s;
        Node *temp = first;
        while(temp != NULL)
        {
            s.push(temp->data);
            temp = temp->link;
        }
        temp = first;
        while(temp != NULL)
        {
            temp->data = s.pop();
            temp = temp->link;
        }
        return 1;
    }
};

int main()
{
    LinkedList l;
    l.Insert(1);
    l.Insert(4);
    l.Insert(3);
    l.Insert(2);

    l.Print();

    l.Rev();

    l.Print();
    return 0;
}