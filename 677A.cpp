#include<iostream>
using namespace std;
int main()
{
    int n,h;
    int sum = 0;
    cin>>n;
    cin>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] > h)
        {
            sum += 2;
        }
        if(a[i] <= h)
        {
            sum += 1;
        }
    }
    cout<<sum;
    return 0;
}