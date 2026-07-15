#include<iostream>
using namespace std;

bool hasDistantYear(int year)
{
    bool seen[10] = {false};

    while(year > 0)
    {
        int lastDigit = year % 10;
        if(seen[lastDigit])
            return false;
        
        seen[lastDigit] = true;
        year /= 10;
    }
    return true;
}

int main()
{
    int y;
    cin>>y;
    y += 1; 
    while(hasDistantYear(y) == false)
    {
        y += 1;
    }
    cout<<y;
    return 0;
}