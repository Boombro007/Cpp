#include<iostream>
using namespace std;
int main()
{
    static int elephant_pos = 0;
    int elephants_fri;
    cin>>elephants_fri;
    int step = elephants_fri - elephant_pos;
    int count = 0;
    while(step > 0)
    {
        if(step>= 5) step -= 5;
        else if(step >= 4) step -= 4;
        else if(step >= 3) step -= 3;
        else if(step >= 2) step -= 2;
        else step -= 1;

        count++;
    }
    cout<<count<<endl;
    return 0;
}