#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[101];
    cin>>s1;   
    int a = strlen(s1);
    int count = 0;
    for(int i=0;i<a;i++)
    {
        count ++;
    }
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (s1[i] == s1[j]) {
                for (int k = j; k < a; k++) {
                    s1[k] = s1[k + 1];
                }
                a--;
                j--;
            }
        }
    }
    if(a % 2 == 0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}