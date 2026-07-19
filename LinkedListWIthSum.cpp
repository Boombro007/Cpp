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
        cout<<"NULL"<<endl;   
        return 1;   
    }
    int Sum()
    {
        Node *temp = first;
        while(temp !=NULL && temp->link != NULL && temp->link->link != NULL)
        {
            int sum = temp->data + temp->link->data + temp->link->link->data;
            if(sum > 20)
            {
                Node *n = new Node(sum);
                Node *third = temp->link->link;
                n->link = third->link;
                third->link = n;
                temp = n;
            }
            else
            {
                temp = temp->link;
            }
        }
        return 1;
    }
};

int main()
{
    LinkedList l;

    l.Insert(1);
    l.Insert(2);
    l.Insert(3);

    l.Print();
    l.Sum();
    l.Print();
    return 0;
}