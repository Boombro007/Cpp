#include<iostream>
using namespace std;

class array
{
    int *arr;
    int n;
    public:
    void getdata()
    {
        cout<<"Enter number of elements : ";
        cin>>n;
        arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void insert()
    {
        int pos;
        cout<<"Enter position of element to insert : ";
        cin>>pos;
        int n1;
        cout<<"Enter a number : ";
        cin>>n1;
        for(int i = n; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = n1;
        n++;
    }
    void delet()
    {
        int pos;
        cout<<"Enter position of number to delete : ";
        cin>>pos;
        for(int i=0;i<n;i++)
        {
            if((arr[i]) == pos)
            {
                for(int j=0;j<n-1;j++)
                {
                    arr[j] = arr[j+1]; 
                }
                n--;
            }
        }
    }
    void update()
    {
        int pos;
        int n1;
        cout<<"Enter postion of element : ";
        cin>>pos;
        cout<<"Enter Number to update : ";
        cin>>n1;
        arr[pos] = n1;
    }
    void display()
    {
        cout<<"Display : ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    array a;
    a.getdata();
    int ch;
    cout<<"1 - Insert\n2 - Delete\n3 - Update\n";
    cin>>ch;
    if(ch == 1)
    {
        a.insert();
        a.display();
    }
    else if(ch == 2)
    {
        a.delet();
        a.display();
    }
    else if(ch == 3)
    {
        a.update();
        a.display();
    }
    else
    {
        return 0;
    }
    return 0;
}