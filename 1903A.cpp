#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            b.push_back(p);
        }
        if(is_sorted(b.begin(),b.end()))
        {
            cout<<"YES\n";
        }
        else
        {
            if(k >= 2)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}