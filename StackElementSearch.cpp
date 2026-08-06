#include <iostream>
using namespace std;

class Stack
{
    int arr[5];
    int link;
    public:
    Stack()
    {
        link = -1;
    }
    int Insert(int x)
    {
        if(link<5)
        {
            link++;
            arr[link] = x;
            return 1; 
        }
        else
            return 0;
    }
    int pop()
    {
        if(link >= 0 && link < 5)
        {
            int r = arr[link];
            link--;
            return r;
        }
        else
            return 0;
    }
    bool searchelement(int x)
    {
        for(int i=0;i<5;i++)
        {
            if(arr[i] == x)
            {
                return true;
            }
        }
    }
};

int main() {
    Stack s;
    s.Insert(1);
    s.Insert(2);
    bool ser = s.searchelement(2);
    if(ser == true)
        cout<<"Element exists !\n";
    else
        cout<<"Element doesn't exists !\n";
    return 0;
}