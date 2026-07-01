#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    static int count = 0;
    int n;
    cin>>n;

    char *p = (char *) calloc(n,sizeof(char));
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        if(p[i] == p[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}