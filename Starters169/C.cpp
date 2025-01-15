// https://www.codechef.com/problems/P3169
// Make k Most Frequent


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int result = 2;
        vector<int> arr(n), vec;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == k) vec.push_back(i);
        }
        bool flag = false;
        int m = vec.size();
        
        
        for (int i = 0; i < m; i++) {
            if (flag) break;
            for (int j = i; j < m; j++) {
                if (flag) break;
                map<int, int> mpp;
                int maxi = 0, count = j - i;
                count++;
                for (int x = vec[i]; x <= vec[j]; x++) {
                    if (arr[x] != k) {
                        mpp[arr[x]]++;
                        maxi = max(maxi, mpp[arr[x]]);
                    }
                    else {
                        count++;
                    }
                }
                if (count > 0 && count >= maxi) {
                    int pre = 0;
                    if (i > 0) pre = 1;
                    int suf = 0;
                    if (j < n - 1) suf = 1;
                    int all = pre + suf;
                    result = min(result, all);
                    if (result == 0) flag = true; 
                }
            }
        }
        cout << result << endl;
    }    
    return 0;
}