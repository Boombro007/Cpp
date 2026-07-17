#include<iostream>
using namespace std;
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
    int InsertData(int d)
    {
        Node *temp = first;
        if(first == NULL)
        {
            first = new Node(d);
            return 1;
        }
        else
        {
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            Node *n1 = new Node(d);
            temp->link = n1; 
            return 1;
        }
    }
    int PrintLL()
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
    int BoforeInsert(int x,int d)
    {
        Node *temp = first;
        while(temp != NULL)
        {
            if(temp->link->link == NULL)
            {
                cout<<"NULL";
            }
            temp = temp->link;
        }
        if(temp->data == x)
        {
            Node *n2 = new Node(d);
            n2->link = temp->link;
            temp->link = n2;
        }
        return 1;
    }
    int AfterInsert(int p,int d)
    {
        Node *temp = first;
        while(temp->data != p)
        {
            temp = temp->link;
        }
        if(temp->data == p)
        {
            Node *n3 = new Node(d);
            n3->link = remp->link;
            temp->link = n3;
        }
        return 1;
    }
    int Delete(int p)
    {
        Node *temp = first;
        while(temp->link->data != p)
        {
            temp = temp->link; 
        }
        if(temp->link->data == p)
        {
            temp->link = temp->link->link;
        } 
        return 1;
    }
};
int main()
{
    LinkedList l;
    l.InsertData(1);
    l.InsertData(2);
    l.InsertData(3);
    l.InsertData(4);

    l.PrintLL();
    return 0;
}