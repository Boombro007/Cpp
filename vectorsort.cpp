#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void sort(vector<int>& v2,int s1)
// {
//     for(int i=0;i<s1;i++)
//     {
//         for(int j=0;j<s1;j++)
//         {
//             if(v2[i] < v2[j])
//             {
//                 int t = v2[i];
//                 v2[i] = v2[j];
//                 v2[j] = t;
//             }
//         }       
//     }
//     for(int i=0;i<s1;i++)
//     {
//         cout<<v2[i]<<" ";
//     }
// }
int main()
{
    int x;
    vector<int> v1;
    int size = v1.size();
    cin>>size;
    if(size >= 1 && size <= 100000)
    {
        for(int i=0;i<size;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<size;i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}