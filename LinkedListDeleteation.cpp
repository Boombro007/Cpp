#include<iostream>
using namespace std;

class Node
{
    public:
    Node *link;
    int data;
    Node(int d)
    {
        link = NULL;
        data = d;
    }
};

class LinkedListLL
{
    Node * first;
    public:
    LinkedListLL()
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
            Node *n1 = new Node(d);
            temp->link = n1;
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
    int Delete(int x)
    {
        Node *temp = first;
        while(temp->link->data != x)
        {
            temp = temp->link;
        }
        if(temp->link == NULL)
        {
            cout<<"Element Not found !!"<<endl;
            return 1;
        }
        else
        {
            Node *deln = temp->link;
            cout<<"DELETED ELEMENT : "<<deln->data<<endl;
            temp->link = temp->link->link;
            delete (deln);
            return 1;
        }
    }
    int AfterDelete(int x)
    {
        Node *temp = first;
        while(temp->data != x)
        {
            temp = temp->link;
        }
        if(temp->link == NULL)
        {
            cout<<"No element found !!";
            return 1;
        }
        else
        {
            Node *deln = temp->link;
            cout<<"Deleted element : "<<deln->data<<endl;
            temp->link = temp->link->link;
            delete(deln);
            return 1;
        }        
    }
    int BeforeDelete(int x)
    {
        Node *temp = first;
        while(temp->link->link->data != x)
        {
            temp = temp->link;
        }
        if(temp->link == NULL)
        {
            cout<<"Element not found\n";
            return 1;
        }
        else
        {
            Node *deln = temp->link;
            cout<<"Deleted Element : "<<deln->data<<endl;
            temp->link = temp->link->link;
            delete(deln);
            return 1;
        }
    }
};

int main()
{
    LinkedListLL l;
    l.Insert(1);
    l.Insert(4);
    l.Insert(3);
    l.Insert(2);
    l.Print();
    l.Delete(3);
    l.Print();
    l.Delete(2);
    l.Print();
    l.Insert(3);
    l.Print();
    l.Insert(2);
    l.Print();
    l.AfterDelete(3);
    l.Print();
    l.BeforeDelete(3);
    l.Print();
    return 0;
}