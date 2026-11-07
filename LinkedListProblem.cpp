//this is the problem when the linkedlist reach 30 then it will create new node of last 2 nodes sum 
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};

class LL{
    node *first;

    public:
    LL(){
        first = NULL;
    }

    void insert(int d){
        node *n = new node(d);

        if(first == NULL){
            first = n;
        }
        else{
            node *temp = first;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    void sumReach30ThenNewNode(){
        node *curr = first;
        node *prev = first->next;

        node *nn;
        while(curr != NULL){
            int sum = curr->data + prev->data;

            if(sum > 30){
                nn = new node(sum);
                nn->next = curr->next;
                curr->next = nn;

                prev = nn;
                curr = nn->next;
            }
            else{
                
                prev = curr;
                curr = curr->next;
            }
        }
    }

    void print(){
        node *temp = first;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    LL l;
    l.insert(14);
    l.insert(87);
    l.insert(42);
    l.insert(63);

    l.print();

    l.sumReach30ThenNewNode();

    l.print();
    return 0;
}