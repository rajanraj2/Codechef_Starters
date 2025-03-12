// https://www.codechef.com/problems/ORDDIST


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

int helper(vi &arr, int pivot, vi &b) {
    vector<pair<int, int>> vec; 
    vec.reserve(arr.size());
    for (auto it : arr) {
        int val = abs(it - arr[pivot]);
        vec.pb({val, it});
    }
    
    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b){
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });
    
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != vec[i].second) return -1;
    }
    return pivot;
}

int32_t main() {
    fio;
    w(t) {
        int n, ans = -1;
        cin >> n;
        
        vi a(n), b(n), c(n);
        ivec(a);
        ivec(b);
        
        for (int i = 0; i < n; i++) {
            int val = helper(a, i, b);
            if (val != -1) {
                ans = val + 1;
                break;
            }
        }
        cout << ans << "\n";
        
    }    
    return 0;
}