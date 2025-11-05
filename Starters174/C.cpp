// https://www.codechef.com/problems/DELDIF


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mpp;
        int zero = 0, result = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        
        for (auto it : mpp) {
            int val = it.first;
            int count = it.second;
            
            if (val == 0) {
                zero += count;
                continue;
            }
            
            if (count % 2) result++;
            zero += count / 2;
        }
        
        if (zero > 0) result++;
        cout << result << endl;
    }    
    return 0;
}