#include<iostream>
using namespace std;
int main()
{
    char s1[1001];
    cin>>s1; 
    if(s1[0] >= 65 && s1[0] <= 90)
    {
        cout<<s1<<endl;
    }
    else if(s1[0] >= 97 && s1[0] <= 122)
    {
        s1[0] = s1[0] - 32;
        cout<<s1<<endl;
    }
    return 0;
}