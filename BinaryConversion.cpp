#include<iostream>
#include<vector>
using namespace std;

string decimalNumber(int n){
    if(n == 0) return 0;

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}

int main(){
    double d;
    cout<<"Enter a decimal number : ";
    cin>>d;
    
    if(d < 0){
        cout<<"Enter a positive number.";
    }
    else{
        string binary = decimalNumber(d);
        cout<<"Decimal : " << d << " to "<<"Binary : "<<binary<<"\n";
    }

    return 0;
}