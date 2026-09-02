#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class LinkedList
{
    public:
    Node *first;
    LinkedList()
    {
        first = NULL;
    }
    
    void Insert(int d)
    {
        if(first == NULL)
        {
            first = new Node(d);
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
        }
    }
    void reverse()
    {
        Node *prev = NULL;
        Node *curr = first;
        Node *next = NULL;
        
        while(curr != NULL)
        {
            next = curr->next; // Store the next node
            curr->next = prev; // Reverse the link
            prev = curr;       // Move prev forward
            curr = next;       // Move curr forward
        }
        first = prev; // Update the head of the list
    }

    LinkedList addCoins(LinkedList &L2)
    {
        // 1. Reverse both lists so the least significant digits are at the head
        this->reverse();
        L2.reverse();

        LinkedList result;
        Node *head1 = this->first;
        Node *head2 = L2.first;
        int carry = 0;

        // 2. Add nodes and track the carry-over
        // The loop runs as long as either list has nodes OR there is a carry left over
        while(head1 != NULL || head2 != NULL || carry > 0)
        {
            int sum = carry; // Start with whatever carried over from the last addition
            
            if(head1 != NULL)
            {
                sum += head1->data;
                head1 = head1->next;
            }
            
            if(head2 != NULL)
            {
                sum += head2->data;
                head2 = head2->next;
            }
            
            // Extract the single digit for the new node (e.g., 14 % 10 = 4)
            result.Insert(sum % 10); 
            
            // Extract the carry for the next calculation (e.g., 14 / 10 = 1)
            carry = sum / 10; 
        }

        // 3. Reverse the final result so it prints in the correct order
        result.reverse();

        // 4. (Optional) Reverse the original lists back to their normal state
        this->reverse();
        L2.reverse();

        return result;
    }
    
    void Print()
    {
        Node *temp = first;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    LinkedList l1 ,l2;
    // Number: 243
    l1.Insert(2);
    l1.Insert(4);
    l1.Insert(3);

    // Number: 564
    l2.Insert(5);
    l2.Insert(6);
    l2.Insert(4);

    cout << "Number 1: ";
    l1.Print();
    
    cout << "Number 2: ";
    l2.Print();

    LinkedList l3 = l1.addCoins(l2);
    
    cout << "Result:   ";
    l3.Print(); // Should output 8->0->7->NULL (243 + 564 = 807)
    
    return 0;
}