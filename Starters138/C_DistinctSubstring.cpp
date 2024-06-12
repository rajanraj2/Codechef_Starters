// Link - https://www.codechef.com/problems/DISTSUB
// Distinct Substrings


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        if ((n - k + 1) >= (k * (k + 1) / 2)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        
        cout << endl;
    }
}
