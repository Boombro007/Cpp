#include<bits/stdc++.h>
using namespace std;

class cnode
{
    public:
    int data;
    cnode *next;
    cnode(int d,cnode *f)
    {
        data = d;
        next = f;
    }
};

class CLL
{
    cnode *first;
    public:
    CLL()
    {
        first = NULL;
    }
    int Insert(int d)
    {
        if(first == NULL)
        {
            first = new cnode(d,first);
            first->next = first;
            return 1;
        }
        else
        {
            cnode *temp = first;
            while(temp->next != first)
            {
                temp = temp->next;
            }
            cnode *nn = new cnode(d,first);
            temp->next = nn;
            nn->next = first;
            return 1;
        }
    }
    int Display()
    {
        cnode *temp = first;
        while(temp->next != first)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
        return 1;
    }
};

int main()
{
    CLL cl;
    cl.Insert(1);
    cl.Insert(4);
    cl.Insert(3);
    cl.Insert(2);
    cl.Display();
    return 0;
}