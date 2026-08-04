#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int t1;
            cin>>t1;
            v.push_back(t1);
        }
        if(v[0] == 1)
        {
            for(int i=0;i<10;i++)
            {
                for(int i=1;i<n-1;i++)
                {
                    if((v[i] > v[i-1]) && (v[i] > v[i+1]))
                    {
                        swap(v[i],v[i+1]);
                    }
                }
            }
            if(is_sorted(v.begin(),v.end()))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
            cout<<"NO\n";
    }
    return 0;
}