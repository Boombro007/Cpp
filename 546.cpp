#include<iostream>
using namespace std;
int main()
{
    int k,w,n;
    int total = 0;
    cin>>k;//first banana price
    cin>>n;//money solider has
    cin>>w;//amount of banana he wants
    for(int i=1;i<=w;i++)
    {
        total += k * i;
    }
    if(total > n)
    {
        int bm = total - n;
        cout<<bm<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}