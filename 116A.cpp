#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; // size of array
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // took people entered
        cin>>b[i]; // took people exited
    }
    int rem = 0;
    int maxPass = 0;
    for(int i=0;i<n;i++)
    {
        rem = rem - a[i] + b[i];
        maxPass = max(maxPass , rem);
    }
    cout<<maxPass<<endl;
    return 0;
}