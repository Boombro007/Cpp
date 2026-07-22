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
    int AfterInsert(int x,int d)
    {
        Node *temp = first;
        while(temp->next != NULL && temp->data != x)
        {
            temp = temp->next;
        }
        Node *n= new Node(d);
        n->prev = temp->next;
        n->next = temp->next;
        temp->next->prev = n;
        temp->next = n;
        return 1;
    }
    int BeforeInsert(int x,int d)
    {
        Node *temp = first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        if(temp == NULL) cout<<"No element\n";
        else
        {
            Node *n = new Node(d);
            n->next = temp;
            n->prev = temp->prev;
            temp->prev->next = n;
            temp->prev = n;
        }
        return 1;
    }
    int PrintLL()
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

    d.PrintLL();

    d.AfterInsert(3,5);

    d.PrintLL();
    return 0;
}