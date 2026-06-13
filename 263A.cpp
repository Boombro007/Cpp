#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int row , col;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int count = 0;
    int rowd , cold;
    if(row >= 2)
        rowd = row - 2;
    else
        rowd =  2 - row;
    if(col >= 2)
        cold = col - 2;
    else 
        cold = 2 - col;
    count = rowd + cold;
    cout<<count<<endl;
    return 0;
}