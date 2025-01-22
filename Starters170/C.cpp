// https://www.codechef.com/problems/FROGS_JUMP
// Crazy Jumping Frogs


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int o = 0, e = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] % 2) o++;
            else e++;
        }
        cout << max(o, e) << endl;
    }    
    return 0;
}