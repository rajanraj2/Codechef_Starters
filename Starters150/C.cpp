#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < k; i++) {
            int last = arr.size() - 1;
            int a = arr[0];
            int b = arr[last];
            int c = a + b;
            
            arr.erase(arr.begin());
            arr.erase(arr.end() - 1);
            arr.push_back(c);
            
        }
        
        for (auto it : arr) {
            cout << it << " ";
        }
        cout << endl;
    }
}
