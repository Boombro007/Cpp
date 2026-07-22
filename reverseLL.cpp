#include<bits/stdc++.h>
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

class LL
{
    Node *first;
    public:
    LL()
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
    int Printll()
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
    int rev()
    {
        Node *temp = first;
        vector<int> v;
        while(temp != NULL)
        {
            v.push_back(temp->data);
            temp = temp->link;
        }
        temp = first;
        int i = v.size() - 1;

        while(temp != NULL)
        {
            temp->data = v[i--];
            temp = temp->link;
        }
        return 1;
    }
    
};

int main()
{
    LL l;
    l.Insert(1);
    l.Insert(2);
    l.Insert(3);

    l.Printll();

    l.rev(); // noraml reverse

    l.Printll();
    return 0;
}