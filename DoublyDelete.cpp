#include<iostream>
using namespace std;

class Node
{
    public:
    Node *prev;
    Node *next;
    int data;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

class DLL
{
    private:
    Node *first;
    public:
    DLL()
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
            Node *nn = new Node(d);
            temp->next = nn;
            nn->prev = temp;
            return 1;
        }
    }
    int Delete(int x)
    {
        Node *temp = first;
        while(temp != NULL && temp->data != x)
        {
            temp = temp->next;
        }
        if(temp == first)
        {
            first = first->next;
            if(first != NULL)
                first->prev = NULL;
            return 1;
        }
        else
        {
            if(temp->next != NULL)
                temp->next->prev = temp->prev;
            if(temp->prev != NULL)
                temp->prev->next = temp->next;
            cout<<"Deleted element : "<<temp->data<<endl;
            delete temp;
            return 1;
        }
    }
    int BeforeDelete(int x)
    {
        Node *temp = first;
        while(temp != NULL && temp->data != x)
        {
            temp = temp->next;
        }
        if(temp == NULL || temp->prev == NULL)
        {
            cout<<"No element found!!!\n";
            return 1;
        }
        Node *deln = temp->prev;
        if(deln == first)
        {
            first = temp;
            first->prev = NULL;
            return 1;
        }
        else
        {
            deln->prev->next = temp;
            deln->prev = temp->prev; 
            cout<<"Deleted element : "<<deln->data<<endl;
            delete(deln);
            return 1;
        }
    }
    int DeleteAfter(int x)
    {
        Node *temp = first;
        while(temp != NULL && temp->data != x)
        {
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL)
        {   
            cout<<"No element found !!!\n";
            return 1;
        }
        Node *deln = temp->next;
        temp->next = deln->next;
        if(deln->next != NULL)
            deln->next->prev = temp;
        cout<<"Deleted element : "<<deln->data<<endl;
        delete (deln);
        return 1;
    }
    int Print()
    {
        Node *temp = first;
        while(temp != NULL)
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
    DLL d1;
    d1.Insert(1);
    d1.Insert(4);
    d1.Insert(3);
    d1.Insert(2);
    d1.Print();
    d1.Delete(3);
    d1.Print();
    d1.Insert(3);
    d1.Print();
    d1.BeforeDelete(2);
    d1.Print();
    d1.Insert(2);
    d1.Print();
    d1.DeleteAfter(4);
    d1.Print();
    return 0;
}