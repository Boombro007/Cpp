#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string user = "Admin";
    string password = "Admin.0707";
// 
    string u_name;
    string p_name;

    while(true)
    {
        cout<<"Enter Username : ";
        getline(cin>>ws,u_name);
        cout<<"Enter Password : ";
        getline(cin>>ws,p_name);

        if(user == u_name && password == p_name)
        {
            cout<<"Access Granted!!\n";
            break;
        }
        else if(user != u_name || password != p_name)
        {
            cout<<"Check your password or username\n";
        }
    }
    return 0;
}