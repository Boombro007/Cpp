#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
class BadLengthException : public exception
{
    string s;
    public:
    BadLengthException(int n)
    {
        //this construtor is called when the username would be short 
        s = to_string(n);
    }
    virtual const char* what() const throw()
    {
        //what is called by the object 'e' for the size of the exception thrown by itself!!
        return s.c_str();//this function leads to return the length of the string in c-style
    }
};

//comes when to check the username
bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();//length of the string
	if(n < 5) {
		throw BadLengthException(n);//this will throw an exception in main and from main the class will be called
        //if false then check at the down for same character in the string
         }
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
        //if it contains 2 - 'w's then would go as false which will print invalid in the main()
	}
	return isValid;
    //returns isvalid as true or false
}

int main() {
	int T; cin >> T;
    //take textlength
	while(T--) 
    //decrement of the length for loop
    {
        // int e;
		string username;
		cin >> username;
        //took the user name
		try {
			bool isValid = checkUsername(username); // called the function to check wheather it is correct or not 
			if(isValid) {
                //if checkusername returns ture then will print this
				cout << "Valid" << '\n';
			} else {
                //for false return will print this
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {

			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}

/*
for input:
3 -> T = 3;
while(loop) ->
username = "peter";
try block will call function checkusername -> in function first will get its length -> but its greater than so 
if will be false -> goes in for loop to check wheather it has 2 - 'w' in string but it is false so the given value 
'true' will be retuened and print 'Valid'

for username = "Me";
but in try block it will throw an exception in main and it will make an object and callthe construtor of
'BadLengthExcaption' and it will return the length by what virtual function...
*/