#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *link;
    Node(int d)
    {
        link = NULL;
        data = d;
    }
};

class LinkedList
{
    Node *first;
    int sum = 0;
    public:
    LinkedList()
    {
        first = NULL;
    }
    void Insert(int d)
    {
        Node *temp = first;
        if(first == NULL)
        {
            first = new Node(d);
        }
        else
        {
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            Node *nn = new Node(d);
            temp->link = nn;
        }
    }
    void Sum()
    {
        Node *temp = first;
        while(temp != NULL)
        {
            sum += temp->data;
            temp = temp->link;
        }
        cout<<"Sum of LL : "<<sum<<"\n";
    }
    void SumInsert()
    {
        Node *temp = first;
        while(temp != NULL)
        {
            temp->data = sum + temp->data;
            temp = temp->link;
        }
        cout<<"Sum Inserted to all LL\n";
    }
    void Reverse()
    {
        stack<int> s;
        Node*temp = first;
        while(temp != NULL)
        {
            s.push(temp->data);
            temp = temp->link;
        }
        temp = first;
        while(temp != NULL)
        {
            temp->data = s.top();
            s.pop();
            temp = temp->link;
        }
    }
    void Print()
    {
        Node *temp = first;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->link;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    LinkedList l1; 
    l1.Insert(1);
    l1.Insert(4);
    l1.Insert(3);
    l1.Insert(2);
    l1.Print();
    l1.Sum();
    l1.SumInsert();
    l1.Print();
    l1.Reverse();
    l1.Print();
    return 0;
}