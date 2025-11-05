// https://www.codechef.com/problems/STKSTR


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int maxi = 1, ind = -1;
        int prev = arr[0], count = 1;
        bool flag = true, check = true;
        
        for (int i = 1; i < n; i++) {
            if (prev > arr[i]) {
                int val = arr[i] * x;
                if (flag && val >= prev) {
                    ind = i;
                    count++;
                    prev = val;
                    flag = false;
                    check = true;
                }
                else {
                    if (check && ind != -1) {
                        i = ind;
                        check = false;
                    }
                    count = 1;
                    prev = arr[i];
                    flag = true;
                }
                maxi = max(maxi, count);
                continue;
            }
            prev = arr[i];
            count++;
            maxi = max(maxi, count);
        }
        
        cout << maxi << endl;
    }    
    return 0;
}