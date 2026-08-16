#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    string a;
    cin >> size;
    cin >> a;
    if (size < 26) {
        cout << "NO\n";
        return 0;
    }
    set<char> unique_letters;
    for (int i = 0; i < size; i++)
    {
        unique_letters.insert(tolower(a[i]));
    }
    if (unique_letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}