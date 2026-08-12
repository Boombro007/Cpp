#include<bits/stdc++.h>
using namespace std;
int main()
{
    string morse;
    cin>>morse;
    int n = morse.length();
    string ans;
    for(int i=0;i<n;i++)
    {
        if(morse[i] == '.')
        {
            ans += '0';
        }
        else if(morse[i] == '-' && morse[i+1] == '.')
        {
            ans += '1';
            i++;
        }
        else if(morse[i] == '-' && morse[i+1] == '-')
        {
            ans += '2';
            i++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}