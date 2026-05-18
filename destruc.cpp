#include<iostream>
using namespace std;
class mark
{
    int *m;
    int n;
    public:
    mark(int n1)
    {
        n = n1;
        m = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
        }
        cout<<"CONSTRUCTOR CALLED!!\n";
    }
    void dis()
    {
        for(int i=0;i<n;i++)
        {
            cout<<m[i]<<endl;
        }
        
    }
    ~mark()
    {
        delete [] m;
        cout<<"DESTRUCTOR CALLED!!\n";
    }
};
int main()
{   
    mark m(5);
    m.dis();
    return 0;
}