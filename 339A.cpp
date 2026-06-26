#include<iostream>
using namespace std;

int main()
{
    char s1[101];
    cin>>s1;
    char num[50];
    int count = 0;
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i] == '1' || s1[i] == '2' || s1[i] == '3')
        {
            num[count] = s1[i];
            count++; 
        }
    }
    for(int i=0;i < count - 1;i++)
    {
        for(int j=0;j<count - i - 1;j++)
        {
            if(num[j] > num[j+1])
            {
                int t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
            }
        }
    }
    for(int i = 0;i<count;i++)
    {
        cout<<num[i];
        if(i<count-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}