// Link - https://www.codechef.com/problems/MAXDISTPERM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; ++i) {
            A[i] = i + 1;
            B[i] = (i + 1) % n + 1;;
        }
        for (int i = 0; i < n; ++i) {
            cout << A[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; ++i) {
            cout << B[i] << " ";
        }
        cout << endl;
    }
}
