#include <iostream>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin >> n;
 
    // Direct O(1) mathematical calculation
    if (n % 2 == 0) {
        cout << n / 2 << "\n";
    } else {
        cout << -(n + 1) / 2 << "\n";
    }
 
    return 0;
}