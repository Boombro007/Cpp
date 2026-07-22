#include<iostream>
using namespace std;

class Node
{
    public:
    Node *next;
    Node *prev;
    int data;
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class DoubleLL
{
    Node *first;
    public:
    DoubleLL()
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
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            Node *n = new Node(d);
            n->prev = temp;
            temp->next = n;
            return 1;
        }
    }
    int PrintDLL()
    {
        Node *temp = first;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        return 1;
    }
};

int main()
{
    DoubleLL d;
    d.Insert(1);
    d.Insert(4);
    d.Insert(3);
    d.Insert(2);

    d.PrintDLL();
    return 0;
}