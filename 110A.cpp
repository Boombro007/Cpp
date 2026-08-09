#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int lucky = 0;
    int size = n.length();
    for(int i=0;i<=size;i++)
    {
        if(n[i] == '4' || n[i] == '7')
        {
            lucky++;
        }
    }
    if(lucky == 4 || lucky == 7)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}