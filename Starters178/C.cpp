// https://www.codechef.com/problems/SMOOTHINC


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

bool check(vi &arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] >= arr[i]) return false;
    }
    return true;
}

char helper(vi &arr, int index) {
    // if (arr.size() == 1) return '1';
    vi curr;
    curr.reserve(arr.size() - 1);
    while (curr.size() > 1) {
        int s = curr.size();
        if (!check(curr)) return '0';
        
        vi arr2(s - 1);
        for (int i = 1; i < s; i++) {
            arr2[i - 1] = curr[i] - curr[i - 1];
        }
        curr = arr2;
    }
    return '1';
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        vi arr(n);
        ivec(arr);
        string result(n, '0');
        
        for (int i = 0; i < n; i++) {
            result[i] = helper(arr, i);
        }
        
        cout << result << "\n";
    }    
    return 0;
}