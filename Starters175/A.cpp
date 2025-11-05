// https://www.codechef.com/problems/P2_175


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
        int n;
        cin >> n;
        
        if (n == 1 || n == 3) cout << 1 << "\n";
        else if (n % 2) {
            cout << (n - 1) / 2 << "\n";
        }
        else cout << (n / 2) + 1 << "\n";
    }    
    return 0;
}