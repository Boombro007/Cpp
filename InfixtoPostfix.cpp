#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

int prio(char op)
{
    if(op == '^')
        return 3;
    else if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return -1;
}

string InfixtoPostfix(string s1)
{
    stack<char> s2;
    int i=0;
    string ans;
    int n = s1.length();
    while(i<n)
    {
        if((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= '0' && s1[i] <= '9'))
        {
            ans = ans + s1[i];
        }
        else if(s1[i] == '(')
        {
            s2.push(s1[i]);
        }
        else if(s1[i] == ')')
        {
            while(!s2.empty() && s2.top() != '(')
            {
                ans += s2.top();
                s2.pop();
            }
            if(!s2.empty()) s2.pop();
        }
        else
        {
            while(!s2.empty() && prio(s1[i] <= prio(s2.top())))
            {
                ans += s2.top();
                s2.pop();
            }
            s2.push(s1[i]);
        }
        i++;
    }
    while(!s2.empty())
    {
        ans += s2.top();
        s2.pop();
    }
    return ans;
}

int main() {
    string s;
    cout<<"Enter the equation : ";
    cin>>s;
    cout<<"Infix : "<<s<<"\n";
    cout<<"Postfix : "<<InfixtoPostfix(s)<<"\n";
    return 0;
}