#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int group = 1;
    string bmag , nmag;
    cin>>bmag;
    for(int i=1;i<n;i++)
    {
        cin>>nmag;
        if(nmag != bmag)
        {
            group++;
        }
        bmag = nmag;
    }
    cout<<group<<"\n";
    return 0;
}