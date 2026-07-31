#include<iostream>
using namespace std;

class LIFO
{
    int a1[10];
    int link;
    public:
    LIFO()
    {
        link = -1;
    }
    int Insert(int x)
    {
        if(link < 10)
        {
            link++;
            a1[link] = x;
            return 1;
        }
        else
            return 0;
    }
    int pop()
    {
        if(link >= 0 && link < 10)
        {
            int r = a1[link];
            link--;
            return r;
        }
        else
            return 0;
    }
};

class FILO
{
    int a1[10];
    int link;
    public:
    FILO()
    {
        link = 9;
    }
    int Insert(int x)
    {
        if(link >= 0)
        {
            link--;
            a1[link] = x;
            return 1;
        }
        else
            return 0;
    }
    int pop()
    {
        if(link >= 0 && link < 10)
        {
            int r = a1[link];
            link++;
            return r;
        }
        else
            return 0;
    }
};

int main()
{
    while(true)
    {
        cout<<"MENU OF STACK :\n1 - LIFO\n2 - FILO\n3 - EXIT\n";
        int ch;
        cout<<"Enter your choice : ";
        cin>>ch;
        if(ch == 1)
        {
            LIFO l;
            int n;
            cout<<"Enter number (MAX : 10): ";
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                l.Insert(arr[i]);
            }
            arr[n] = 0;
            for(int i=0;i<n;i++)
            {
                arr[i] = l.pop();
            }
            cout<<"=-=-=-= LIFO =-=-=-=\n";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<"\n";
            }
        }
        else if(ch == 2)
        {
            FILO f;
            int n;
            cout<<"Enter number (MAX : 10): ";
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                f.Insert(arr[i]);
            }
            arr[n] = 0;
            for(int i=0;i<n;i++)
            {
                arr[i] = f.pop();
            }
            cout<<"=-=-=-= FILO =-=-=-=\n";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<"\n";
            }
        }
        else if(ch == 3)
        {
            break;
        }
    }
    return 0;
}