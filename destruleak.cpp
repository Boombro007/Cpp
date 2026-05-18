#include<iostream>
using namespace std;
class leak
{
    int *l;
    int n;
    public:
    leak(int n1)
    {
        n = n1;
        l = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
        } 
        cout<<"With leak !!\n";
    }
    void dis()
    {
        cout<<"--- DISPLAY ---\n";
        for(int i=0;i<n;i++)
        {
            cout<<l[i]<<" ";
        }
    }
};
int main()
{
    int n2;
    cout<<"Enter a number : ";
    cin>>n2;
    leak l1(n2);
    l1.dis();
    return 0;
}