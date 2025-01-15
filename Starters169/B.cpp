// https://www.codechef.com/problems/P4169
// Hamming Equivalent


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            a[i] = __builtin_popcount(arr[i]);
            b[i] = __builtin_popcount(i + 1);
        }
        
        string result = "Yes";
        if (a != b) result = "No";
        
        cout << result << endl;
    }    
    return 0;
}