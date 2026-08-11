#include<bits/stdc++.h>
using namespace std;
int main()
{
    long count = 0;
    int n = 4;
    long s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}