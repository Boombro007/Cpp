#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int num = rand() % 50 + 1;
    int n1;
    // cout<<num<<endl;
    cout<<"Enter a number from ( 1 - 50): ";
    while(true)
    {
        cin>>n1;
        if(n1 == num)
        {
            cout<<"You Guessed The Number !!\n";
        }   
        else if(n1 > num)
        {
            cout<<"Low you guess\n";
        }
        else if(n1 < num)
        {
            cout<<"High you guess\n";
        }
    }
    return 0;
}