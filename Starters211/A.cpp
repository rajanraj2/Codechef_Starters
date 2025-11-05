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
    int w, p, k;
    cin >> w >> p >> k;
    
    int result = 0;
    if (w >= k) result = 2 * k;
    else {
        result += 2 * w;
        result += (k - w);
    }
    
    cout << result << "\n";
}

int32_t main() {
    fio;
    w(t) solve();
    return 0;
}