// https://www.codechef.com/problems/KO_MON
// Monster Monster


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        long long result = arr[0], plus = 0;
        for (int i = 1; i < n; i++) {
            plus += x;
            result = max(result, plus + arr[i]);
        }
        cout << result << endl;
    }    
    return 0;
}