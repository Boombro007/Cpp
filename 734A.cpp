#include<iostream>
using namespace std;
int main()
{
    char ch[100001];
    int n;
    cin>>n;
    int a_count = 0;
    int d_count = 0;
    // ch = new char[100001];
    cin>>ch;
    for(int i=0;i<n;i++)
    {
        if(ch[i] == 'A')
        {
            a_count++;
        }
        else if(ch[i] == 'D')
        {
            d_count++;
        }
    }
    if(a_count > d_count)
    {
        cout<<"Anton\n";
    }
    else if(a_count < d_count)
    {
        cout<<"Danik\n";
    }
    else
    {
        cout<<"Friendship\n";
    }
    // cout<<ch<<endl;
    return 0;
}