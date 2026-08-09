#include<iostream>
using namespace std;
int main()
{
    int size,ti;
    cin>>size>>ti;
    string seq;
    cin>>seq;
    for(int t=0;t<ti;t++)
    {
        for(int i=0;i<size-1;i++)
        {
            if(seq[i] == 'B' && seq[i+1] == 'G')
            {
                seq[i] = 'G';
                seq[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<seq<<endl;
    return 0;
}