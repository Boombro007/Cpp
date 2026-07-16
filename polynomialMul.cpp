#include<iostream>
using namespace std;

struct poly
{
    int coef;
    int expo;
};

int main()
{
    int l1,l2;

    cout<<"Enter Size of polynomial - 1 : ";
    cin>>l1;
    cout<<"Enter Size of polynomial - 2 : ";
    cin>>l2;

    poly p1[l1];
    poly p2[l2];

    int MAX = l1*l2;
    poly p3[MAX];

    int i=0,j=0,k=0;

    cout<<"=-=-= Polynomial - 1 =-=-=\n";
    for(i=0;i<l1;i++)
    {
        cout<<"Enter Coeffeint : ";
        cin>>p1[i].coef;
        cout<<"Enter Exponent : ";
        cin>>p1[i].expo;
    }

    cout<<"=-=-= Polynomial - 2 =-=-=\n";
    for(j=0;j<l2;j++)
    {
        cout<<"Enter Coeffeint : ";
        cin>>p2[j].coef;
        cout<<"Enter Exponent : ";
        cin>>p2[j].expo;
    }
    cout<<endl;

    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            p3[k].coef = p1[i].coef * p2[j].coef;
            p3[k].expo = p1[i].expo + p2[j].expo;
            k++; 
        }
    }
    
    for(int m=0; m<k; m++)
    {
        cout<<p3[m].coef<<"x^"<<p3[m].expo;
        if(m < k - 1) cout<<" + "; // Makes the output cleaner
    }
    return 0;
}