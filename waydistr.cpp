#include<iostream>
using namespace std;
class ways
{
    static int count;
    public:
    ways()
    {
        count++;
        cout<<count<<" Consturctor created\n";
    }
    ~ways()
    {
        count--;
        cout<<count<<" Constructor Destruted\n";
    }
};
int ways :: count = 0;
int main()
{
    ways w;
    ways w1;
    return 0;
}