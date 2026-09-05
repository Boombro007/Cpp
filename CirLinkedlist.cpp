#include<bits/stdc++.h>
using namespace std;

class cnode
{
    public:
    int data;
    cnode *next;
    cnode(int d)
    {
        data = d;
        next = NULL;
    }
};

class CLL
{
    cnode *first;
    cnode *tail;
    public:
    CLL()
    {
        first = NULL;
        tail = NULL;
    }
    int IAH(int d) //insert at head
    {
        if(first == NULL)
        {
            first = tail = new cnode(d);
            tail->next = first;
            return 1;
        }
        else
        {
            cnode *nn = new cnode(d);
            nn->next = first;
            first = nn;
            tail->next = first;
            return 1;
        }
    }
    int IAT(int d)
    {
        if(first == NULL)
        {
            first = tail = new cnode(d);
            tail->next = first;
            return 1;
        }
        else
        {
            cnode *nn = new cnode(d);
            nn->next = first;
            tail->next = nn;
            tail = nn;
            return 1;
        }
    }
    int DAH()
    {
        if(first == NULL) return 0;
        else if(first == tail)
        {
            delete first;
            first = tail = NULL;
            return 1;
        }
        else 
        {
            cnode *deln = first;
            first = first->next;
            tail->next = first;
            delete deln;
            return 1;
        }
    }
    int DAT()
    {
        if(first == NULL) return 0;
        else if(first == tail)
        {
            delete first;
            first = tail = NULL;
            return 1;
        }
        else
        {
            cnode *temp = tail;
            cnode *prev = first;
            while(prev->next!= tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = first;
            temp->next = NULL;
            delete temp;
            return 1;
        }
    }
    void Display()
    {
        if(first == NULL)
        {
            cout<<"EMPTY!\n";
            return;
        }
        cout<<first->data<<"->";
        cnode *temp = first->next;
        while(temp != first)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<"\n";
    }
};

int main()
{
    CLL cl;
    cl.IAH(1);
    cl.IAH(4);
    cl.IAH(3);
    cl.IAH(2);
    cout<<"c1 : ";
    cl.Display(); // 2 3 4 1 2
    cl.DAH();
    cl.Display(); // 3 4 1 3

    CLL c2;
    c2.IAT(1);
    c2.IAT(2);
    c2.IAT(3);
    cout<<"c2 : "; 
    c2.Display(); // 1 2 3 1
    c2.DAT();
    c2.Display(); // 1 2 1
    return 0;
}