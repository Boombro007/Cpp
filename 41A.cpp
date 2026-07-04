#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(t.begin(),t.end());
    if(s == t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}