#include<iostream>
using namespace std;

// 1. Define what a single Node looks like
class Node
{
    public:
    int data;
    Node* next; // Renamed 'first' to 'next' for standard clarity

    // Parameterized constructor to easily create a new node
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// 2. Define a class to manage the list operations
class LinkedList
{
    Node* head; // Tracks the start of the list

    public:
    LinkedList()
    {
        head = NULL; // Initially, the list is empty
    }

    void Insert_node(int d)
    {
        Node* n2 = new Node(d); // Create the new node

        // Case 1: If the list is empty, make this node the head
        if(head == NULL)
        {
            head = n2;
            return;
        }
        
        // Case 2: Traverse to the last node and link the new node
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n2;
    }

    void Print()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    // Create a LinkedList manager object
    LinkedList list;
    
    list.Insert_node(1);
    list.Insert_node(4);
    list.Insert_node(3);
    list.Insert_node(2);

    list.Print();
    
    return 0;
}