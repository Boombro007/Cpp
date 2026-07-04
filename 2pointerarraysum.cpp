#include<iostream>
using namespace std;
int main()
{
    int c[4] = {2 , 7 , 11 , 13};
    int target = 9;
    int right = 3,left = 0;
    int sum = c[left] +c[right];
    while(left < right || sum != target)
    {
        if(sum < 9)
        {
            left++;
        }
        else 
        {
            right--;
        }
        sum = c[right] + c[left];
    }
    if(sum == target)
    {
        cout<<"Target found at : "<<left<<" & "<<right<<endl;
    }
    else
    {
        cout<<"No pair found!\n";
    }
    return 0;
}