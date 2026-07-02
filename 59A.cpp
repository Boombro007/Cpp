#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int l_count = 0;
    int u_count = 0;
    char s[101];
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            u_count++;
        }
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            l_count++;
        }
    }
    //cout<<u_count<<endl<<l_count<<endl;
    //upper
    if(u_count > l_count)
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
        cout<<s<<endl;
    }
    //lower
    else if(u_count <= l_count)
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}