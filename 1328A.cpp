#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    while(n--)
    {
        cin>>a>>b;
        if((a%b) == 0)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<b - (a%b)<<"\n";
        }
    }
    return 0;
}