#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    stack s;
    cout<<"Enter element of array : ";
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        s.push(arr[i]);
    }

    for(int i=0;i<3;i++)
    {
        int t = s.pop();
        for(int j=0;j<3;j++)
        {
            
        }
    }
    return 0;
}