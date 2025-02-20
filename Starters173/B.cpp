// https://www.codechef.com/problems/COOLSUB


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> st;
        int result = -1;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (st.count(arr[i])) {
                result = arr[i];
            }
            st.insert(arr[i]);
        }
        
        if (result == -1) {
            cout << -1 << endl;
            continue;
        }
        
        cout << 1 << endl;
        cout << result << endl;
        
    }    
    return 0;
}