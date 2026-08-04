#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.find("...") != -1)
        {
            cout<<2<<"\n";
        }
        else
        {
            int count = 0;
            for(int i=0;i<n;i++)
            {
                if(s[i] == '.')
                {
                    count++;
                }
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}