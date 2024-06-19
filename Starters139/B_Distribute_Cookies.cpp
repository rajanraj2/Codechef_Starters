// Link - https://www.codechef.com/problems/DISCOOKIE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        if (m < n) {
            cout << n - m << endl;
            continue;
        }
        int rem = m %  n;
        if (rem <= n/2) {
            cout << rem << endl;
        }
        else {
            cout << n - rem << endl;
        }
    }

}
