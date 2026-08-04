#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for(int k=0;k<test_case;k++)
    {
        int fuel , dist;
        cin>>fuel;
        cin>>dist;
        vector<int> v,diff;
        for(int i=0;i<fuel;i++)
        {
            int t;
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        diff.push_back(v[0]);
        for(int i=0;i<fuel-1;i++)
        {
            diff.push_back(v[i+1] - v[i]);
        }
        diff.push_back((dist - v[fuel-1]) * 2);
        cout<<*max_element(diff.begin(),diff.end())<<"\n";    
    }
    return 0;
}