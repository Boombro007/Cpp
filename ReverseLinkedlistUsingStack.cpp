#include<iostream>
#include<Stack>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int d){
        data = d;
        next = NULL;
    }
};

class LL{
    node* first;
    public:
    LL(){
        first = NULL;
    }
    int insert(int d){
        if(first == NULL){
            first = new node(d);
            return 1;
        }
        else{
            node *nn = new node(d);
            node *temp = first;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = nn;
        }
        return 1;
    }
    void Rev(){
        node *temp = first;
        stack<int> s;
        while(temp != NULL){
            s.push(temp->data);
            temp = temp->next;
        }
        while(!s.empty()){
            cout<<s.top()<<"->";
            s.pop();
        }
        cout<<"NULL\n";
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
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);
    cout<<"Normal linkedlist : ";
    l.print();
    cout<<"Reversed Linkedlist : ";
    l.Rev();
    return 0;
}