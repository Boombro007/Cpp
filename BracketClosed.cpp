#include <bits/stdc++.h>
#include<stack>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string isBalanced(string s) {
    stack<char>s1; // created obj of stack of char
    for(char ch : s) // loop from ch to s
    {
        if(ch == '(' || ch == '{' || ch == '[') // if these such braces present then store in stack
        {
            s1.push(ch); // stores the braces
        }
        else
        {
            if(s1.empty())  // checks if stack is empty or not
                return "NO"; // if yes then returns NO
            char top = s1.top(); // created for getting the top to compare with  the stored braces
            s1.pop();// store the 
            if((ch == ']' && top != '[') || (ch == '}' && top != '{') || (ch == ')' && top !='('))
            { // if any of the above conditions gets true then trigger to returns "No"
                return "NO";
            }
        }
    }
    return s1.empty() ? "YES" : "NO"; // checks before returning the value
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}