#include<iostream>
using namespace std;
struct poly
{
    //Gives two varaible thats store coeffiecent and expononet
    int coe;
    int exp;
};

int main()
{
    poly p1[2]; // polynomial - 1
    poly p2[2]; // polynomial - 2
    poly p3[4]; // the resulting polynomial

    int i=0,j=0,k=0;
    // for the loops which can used further

    cout<<"=-=-= Polynomial - 1 =-=-=\n";
    for(i=0;i<2;i++)
    {
        cout<<"Enter Coeffiecnt : ";
        cin>>p1[i].coe;
        cout<<"Enter Exponential : ";
        cin>>p1[i].exp; 
        // taking those values for the polynomial - 1 and taking for 2 array 
    }
    cout<<endl;

    cout<<"=-=-= Polynomial - 2 =-=-=\n";
    for(i=0;i<2;i++)
    {
        cout<<"Enter Coeffiecnt : ";
        cin>>p2[i].coe;
        cout<<"Enter Exponential : ";
        cin>>p2[i].exp; 
        // taking those values for the polynomial - 2 and taking for 2 array 
    }
    cout<<endl;

    i=0,j=0;
    // reseting those to zero

    while(i<2 && j<2)
    {
        if(p1[i].exp == p2[j].exp) // here, this will work for that have both polynomial same exponent
        {
            p3[k].coe = p1[i].coe + p2[j].coe;//adding the coeffient of both polynomial and assigning  to resulting polynomial
            p3[k].exp = p1[i].exp; // assigging the exponent to the resulting polynomial
            i++,j++,k++; // adding the index of the polynomial for using the loop again
        }
        else if(p1[i].exp > p2[j].exp)// this will work when the exponent of polynomial - 1 then polynomial - 2
        {
            p3[k].coe = p1[i].coe; // assisngging the polynomial - 1 coeffient to resulting polynomial 
            p3[k].exp = p1[i].exp; // assisngging the polynomial - 1 exponent to resulting polynomial
            i++,k++; // adding the index of the polynomial for using loop again
        }
        else
        {
            p3[k].coe = p2[j].coe; // assisngging the polynomial - 2 coeffient to resulting polynomial
            p3[k].exp = p2[j].exp; // assisngging the polynomial - 2 exponent to resulting polynomial
            j++,k++;// adding the index of the polynomial for using loop again
        }
    }
    cout<<endl;
   cout<<"=-=-= Resulting Polynomial =-=-=\n";
    // Loop runs up to 'k' (total terms actually added)
    for(int m=0; m<k; m++)
    {
        cout<<p3[m].coe<<"x^"<<p3[m].exp;
        if(m < k - 1) cout<<" + "; // Makes the output cleaner
    }
    cout<<endl;
}