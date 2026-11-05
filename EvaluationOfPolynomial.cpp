#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct poly{
    int coe;
    int exp;
};

int main(){
    int x; // the value of x

    int t1; // size of polynomial - 1

    cout<<"Enter size of polynomial : ";
    cin>>t1;

    vector<poly> p1(t1); // polynomial - 1

    for(int i=0;i<t1;i++){  // getting the values of polynomial
        cout<<"Enter coefficent : ";
        cin>>p1[i].coe;
        cout<<"Enter exponent : ";
        cin>>p1[i].exp;        
    }

    cout<<"\n";
    
    cout<<"Enter value of x : "; // the value of variable - x
    cin>>x;

    double sum = 0;
    for(int i=0;i<t1;i++){ // getting the answer by adding the sum 
        sum += p1[i].coe * pow(x,p1[i].exp);
    }

    cout<<"Answer : "<<sum<<"\n"; // printed the ans

    return 0;
}