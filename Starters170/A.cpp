// https://www.codechef.com/problems/MINBOTTLES
// Minimum Bottles

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int sum = 0;
        double y = x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        int result = ceil(sum / y);
        cout << result << endl;
    }    
    return 0;
}