#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n1,n2;
    cin>>n1>>n2;
    int n = n1.length();
    string ans;
    for(int i=0;i<n;i++)
    {   
        if(n1[i] == n2[i])
        {
            ans += '0';
        }
        else if(n1[i] != n2[i])
        {
            ans += '1';
        }
    }
    cout<<ans<<"\n";
    return 0;
}