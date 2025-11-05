// https://www.codechef.com/problems/SAME_AND


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    w(t) {
        int n, m;
        cin >> n >> m;
        
        if (m == 0) {
            cout << -1 << "\n";
            continue;
        }
        
        vector<int> result;
        int prev = n;
        
        for (int i = n; i <= m; i = (i + 1) | n) {
            if ((i & prev) == n) {
                result.pb(i);
                prev = i;
            }
        }
        
        // while (prev <= m) {
        //     result.pb(prev);
        //     int add = prev ^ n;
        //     if (add == 0) prev += 1;
        //     else prev += add;
        // }
        
        // for (int i = n; i <= m; i++) {
        //     if ((i & n) == n) result.pb(i);
        // }
        
        if (result.size() <= 1) {
            cout << -1 << "\n";
            continue;
        }
        
        cout << result.size() << "\n";
        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << result.back() << "\n";
    }    
    return 0;
}