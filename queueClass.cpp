#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s,s1;
    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type == 1)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        else if(type == 2)
        {
            if(s1.empty())
            {
                while(!s.empty())
                {
                    s1.push(s.top());
                    s.pop();
                }
            }
            s1.pop();
        }
        else if(type == 3)
        {
            if(s1.empty())
            {
                while (!s.empty()) {
                    s1.push(s.top());
                    s.pop();
                }
            }
            cout << s1.top() << endl;
        }
    }
    return 0;
}