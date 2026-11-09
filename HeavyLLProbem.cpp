#include<iostream>
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

class Linkedlist{
    node *first;
    public:
    Linkedlist(){
        first = NULL;
    }

    void insert(int d){
        if(first == NULL){
            first = new node(d);
        }
        else{
            node *nn = new node(d);
            node *temp = first;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = nn;
        }
    }

    void findAndReplace(int n,int r){
        node *temp = first;
        static int count = 0;
        while(temp != NULL){
            count ++;
            if(temp->data == n){
                temp->data = r;
            }
            else{
                temp = temp->next;
            }
        }
    }

    void purgeMultiple(int x){
        while(first != NULL && (first->data % x) == 0){
            node *deln = first;
            first = first->next; 
            delete deln;
        }
        node *temp = first;
        while(temp != NULL && temp->next != NULL){
            if((temp->next->data % x) == 0){
                node *deln = temp->next;
                temp->next = temp->next->next;
                delete deln;
            }
            else{
                temp = temp->next;
            }
        }
    }

    void insertAtPosition(int posi,int n){
        node *temp = first;
        int pos = 0;
        node *nn = new node(n);

        if(posi == 0){
            nn->next = first;
        }
        else{
            while(temp->next != NULL && pos <posi - 1){
                temp = temp->next;
                pos++;
            }
            nn->next = temp->next;
            temp->next = nn;
        }
    }

    void findMiddleMan(){
        node *t1 = first;
        node *t2 = first;
        int steps = 0;

        while(t1 != NULL){
            steps ++;
            t1 = t1->next;
        }

        int mid = steps / 2;

        steps = 0;
        while(t2 != NULL){
            if(steps == mid){
                cout<<"Middle Man is : " <<t2->data;
            }
            else{
                t2 = t2->next;
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
    Linkedlist l;
    l.insert(10);
    l.insert(25);
    l.insert(20);
    l.insert(25);
    l.insert(30);

    int choice;

    while(true){
        cout<<"1 - Find and Replace Number\n2 - PurgeMultiple\n3 - Insert At position\n4 - Find Middle Man\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice == 1){
            int fnum,rnum;
            cout<<"Enter number to find : ";
            cin>>fnum;
            cout<<"Enter number to replace : ";
            cin>>rnum;

            l.findAndReplace(fnum,rnum);
            l.print();
        }
        else if(choice == 2){
            int pug;
            cout<<"Enter number to multiple to remove : ";
            cin>>pug;

            l.purgeMultiple(pug);
            l.print();
        }
        else if(choice == 3){
            int position,num;
            cout<<"Enter number to find : ";
            cin>>position;
            cout<<"Enter number to insert : ";
            cin>>num;

            l.insertAtPosition(position,num);
            l.print();
        }
        else if(choice == 4){
            l.findMiddleMan();
        }
    }
    return 0;
}