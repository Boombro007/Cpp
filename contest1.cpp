#include <iostream>
using namespace std;
void solve() {
    int k;
    cin >> k;
    bool has_3_or_more = false;
    int count_of_2_or_more = 0;
    //the above parameters were used for the giving significant data
    //bool is used for the setting it to false at start for such condtitions
    //count is used to track different letters from string..
    for (int i = 0; i < k; ++i) {
        int c;
        cin >> c;
        //used c for temp. letter counter and we used this techinque for not creating such arrays in the code for memory allocation.. 
        if (c >= 3) {
            has_3_or_more = true;
        }
        if (c >= 2) {
            count_of_2_or_more++;
        }
    }
    // Evaluate conditions
    if (has_3_or_more || count_of_2_or_more >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //The above both line were used to reduce the time complexity for cin and cout buffering
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    //cin was used in 'if' as it becomes always true
    //in while we used it because we dont had any such limt for loop and it will stop at '0' 
    return 0;
}