// https://www.codechef.com/problems/N3AL_
// Quirky Quests


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> arr(n);
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
            sum += arr[i];
        }
        int mex1 = -1, mex2 = -1;
        
        int num = 0;
        // auto prev;
        bool check = false;
        int c = 0;
        for (auto it : mpp) {
            if (c == 0) auto prev = it;
            cout << it.first << " " << num << endl;
            if (check) {
                it = prev;
                check = false;
            }
            if (it.first != num) {
                if (mex1 == -1) {
                    mex1 = num;
                    prev = it;
                    c++;
                    check = true;
                }
                else if (mex2 == -1 ){
                    mex2 = num;
                    break;
                }
            }
            num++;
            
        }
        cout << "#############" << endl;
        
        cout << mex2 << "mex2" << endl;
        if (mex1 == -1 || (mex1 == 0 && mex2 == -1)) {
            cout << n * n << endl;
            continue;
        }
        
        int answer = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < mex1) answer += (mex1);
            else answer += arr[i];
        }
        
        cout << answer << endl;
        
        
        
        // bool flag = true;
        // int ans = arr.back(), val = 0, count = 1;
        // for (int i = n - 2; i >= 0; i--) {
        //     if ((arr[i] + 1) != arr[i + 1]) {
        //         flag = false;
        //         val = arr[i + 1] - 1;
        //         break;
        //     }
        //     count++;
        //     ans += arr[i];
        // }
        // if (flag) {
        //     cout << sum << endl;
        //     continue;
        // }
        
        // int final = 0;
        // for (int i = 0; i < n; i++) {
        //     if (arr[i] < mex1) final += mex1;
        //     else final += arr[i];
        // }
        
        // int result = 0;
        // for (int i = 0; i < n; i++) {
        //     if (arr[i] < mex2) result += mex2;
        //     else result += arr[i];
        // }
        
        // cout << final << endl;
    }    
    return 0;
}