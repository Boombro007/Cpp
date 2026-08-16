#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> levels;
    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int t;
        cin >> t;
        levels.insert(t);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        levels.insert(t);
    }
    if(levels.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}