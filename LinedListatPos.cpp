#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *link;
    Node(int d)
    {
        data = d;
        link = NULL;
    }
};

class LINKEDLIST
{
    Node *first;
    public:
    LINKEDLIST()
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
            Node *n = new Node(d);
            temp->link = n;
            return 1;
        }
    }
    int Insertatpos(int p,int d)
    {
        Node *temp = first; // created for travse
        int pos = 0; // created a pointer to move for such location
        if(p <= 0) // if postion is negative
        {
            cout<<"Invalid Position !!!!!\n";
            return 1;
        }
        while(temp != NULL && pos < p-1) // trave till we found the postion
        {
            temp= temp->link;
            pos++;
        }
        if(p == 1) // if postion is 1
        {
            Node *n = new Node(d); // new node
            n->link = first; // stores the link
            first = n; // stores the pointer
            return 1;
        }
        else
        {
            Node *n = new Node(d); //create node if it is not 1
            n->link = temp->link; // assging link of the existing element 
            temp->link = n;
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
};

int main()
{
    LINKEDLIST l;
    l.Insert(1);
    l.Insert(2);
    l.Insert(3);
    l.Print();
    cout<<endl;
    l.Insertatpos(2,4);
    // l.Insert(4);
    l.Print();
    return 0;
}