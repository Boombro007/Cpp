#include<iostream>
using namespace std;
//created class that make node that helps to create linkedlist
class Node
{
    public:
    Node *link; // this stores the address of next number
    int data; // stores the data or number 

    Node(int d) // constructor that intitals the value
    {
        data = d; // assign the data
        link = NULL; // asiign NULL to link as for entered data
    }
};

class LinkedList
{
    Node *first; // this helps to create new node for taking input
    public:
    LinkedList() // constructor that assign NULL to pointer
    {
        first = NULL;
    }

    int InsertData(int d) // inserting the data normally
    {
        Node *temp = first; // creating temp for letting first to be at staring point

        if(first == NULL)//if we enter the first number
        {
            first = new Node(d);//new node for assigning data
            return 1;
        }
        else // if we enter more number
        {
            while(temp->link != NULL)  //created for taking the pointer to null for new number to assign
            {
                temp = temp->link; // moving to next link
            }
            Node *n1 = new Node(d);// new node for entering data
            temp->link = n1; //assigning the link to node
            return 1;
        }
    }

    int PrintLL()
    {
        Node *temp = first; // created temp for moving 
        while(temp != NULL) // will work until NULL
        {
            cout << temp->data << "->"; //prints data at that position
            temp = temp->link; // moving from one to another
        }
        cout << "NULL\n"; // prints null at end
        return 1;
    }
    int BeforeInsert(int x, int d) // to insert the data before the number 'x'
    {
        if(first == NULL) return 0; // if there is no data then it returns zero
        if(first->data == x) // this for inserting before first 
        {
            Node *n2 = new Node(d);//new node for inserting data
            n2->link = first;//giving link to first 
            first = n2; // assiging n2 to first
            return 1;
        }
        Node *temp = first; // created temp for moving
        while(temp->link != NULL && temp->link->data != x)
        {
            // this will move until from when the temp is first and the number present  
            temp = temp->link; // moving from one to another till the number 'x'
        }

        if(temp->link == NULL) // if it reaches null as the number is not present then it will print this
        {
            cout << "Value not found\n";
            return 0;
        }

        Node *n2 = new Node(d); // new node for creating node
        n2->link = temp->link; // assigning the link if the number is in middle or else
        temp->link = n2; // giving the link of n2to temp
        return 1;
    }
    int AfterInsert(int p, int d) //inserting an element after number 'p'
    {
        Node *temp = first; // created temp for moving 
        while(temp != NULL && temp->data != p) //loop for moving till the temp is null or till the number 'p'
        {
            temp = temp->link; // moving till the the above conditions get false
        }
        if(temp == NULL) // if the number isn't present then then it goes true
        {
            cout << "Value not found\n";
            return 0;
        }
        Node *n3 = new Node(d); // new node for assiging the data
        n3->link = temp->link; // assiging the temp link to n3
        temp->link = n3; // giving the n3 to the number 'p'
        return 1;
    }
    int Delete(int p) // deletes the number
    {
        if(first == NULL) return 0;
        //if the first is null then returns zero
        if(first->data == p) // now if we want to delete the  first node then this will work
        {
            Node *del = first; // creates node for delete
            first = first->link; // giving the link to next number
            delete del; // delete the number
            return 1;
        }
        Node *temp = first; // cretaes if want to delete number in the middle of LL
        while(temp->link != NULL && temp->link->data != p)
        {
            //travse till the temp of link is null or till the number 'p'
            temp = temp->link; 
        }
        if(temp->link == NULL) // if the number doesnt exits then it will become true and gets out of the function
        {
            cout << "Value not found\n";
            return 0;
        }
        Node *del = temp->link; // new node to store the link
        temp->link = del->link; // giving to next number
        delete del; // delete the number 
        return 1;
    }
};

int main()
{
    LinkedList l;

    l.InsertData(1);
    l.InsertData(2);
    l.InsertData(3);
    l.InsertData(4);

    l.BeforeInsert(3, 5);  
    l.AfterInsert(2, 9); 
    l.Delete(3);         

    l.PrintLL();

    return 0;
}