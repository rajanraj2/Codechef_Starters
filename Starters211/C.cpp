#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void solve() {
    int n;
    cin >> n;
    
    vi arr(n), result, temp;
    ivec(arr);
    
    sort(arr.rbegin(), arr.rend());
    int prev = -1;
    for (auto it : arr) {
        if (prev == it) temp.push_back(it);
        else result.push_back(it);
        prev = it;
    }
    
    for (auto it : temp) {
        result.push_back(it);
    }
    
    
    for (auto it : result) {
        cout << it << " ";
    }
    cout << "\n";
}

int32_t main() {
    fio;
    w(t) solve();
    return 0;
}