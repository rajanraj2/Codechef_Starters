// https://www.codechef.com/problems/FLIPREV


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void helper(string &a, string &b) {
    vector<vector<int>> ans;
    int n = a.size();
    ans.reserve((n + 1) / 2);
    for (int i = 1; i < a.size(); i += 2) {
        if (a[i - 1] == b[i - 1] && a[i] == b[i]) continue;
        if (a[i - 1] != b[i - 1] && a[i] != b[i]) ans.pb({1, i, i + 1});
        else if (a[i - 1] != b[i - 1]) ans.pb({1, i, i});
        else if (a[i] != b[i]) ans.pb({1, i + 1, i + 1});
    }
    
    if (a.size() % 2 && (a.back() != b.back())) ans.pb({1, n, n});
    cout << ans.size() << "\n";
    for (auto it : ans) cout << it[0] << " " << it[1] << " " << it[2] << "\n";
    return;
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << "\n";
            continue;
        }
        helper(a, b);
    }    
    return 0;
}