#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter n & m : ";
    cin>>n>>m;
    if(n == m)
    {
        int a[n][m];
        int b[n][m];
        cout<<"---- ENTER MATRIX - 1 ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               cin>>a[i][j];
            }
        }
        cout<<"---- ENTER MATRIX - 2 ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>b[i][j];
            }
        }
        int mul [n][m] = {0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<n;k++)
                {
                    mul[i][j] = (a[i][j] * b[j][k]) + (a[i][j] * b[i][k]);
                }
            }
        }
        cout<<"\n---- MATRIX- 1 ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\n---- MATRIX- 2 ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\n---- MULTIPLICATION ----\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<mul[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
        cout<<"N != M\n";
    return 0;
}