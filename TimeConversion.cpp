#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    int h = stoi(s.substr(0,2));
    string mm = s.substr(2,6);
    string per = s.substr(8,2);
    if(per == "AM")
    {
        if(h ==12)
            h = 0;
    }
    else if(per=="PM")
    {
        if(h!=12)
        {
            h+=12;
        }
    }
    string hour_str = (h < 10) ? "0" + to_string(h) : to_string(h);
    string st = hour_str + mm ;
    return st;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}