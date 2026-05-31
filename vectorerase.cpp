#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    int a,b,x,v;
    int size;
    cin>>size;
    if(size >= 1 && size <= 100000)
    {
        for(int i=0;i<size;i++)
        {
            cin>>v;
            v1.push_back(v);
        }
    }
    cin>>x;
    v1.erase(v1.begin() + (x-1) );
    cin>>a>>b;
    v1.erase(v1.begin() + (a-1),v1.begin() + (b-1));
    cout<<v1.size()<<endl;
    for(unsigned int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}