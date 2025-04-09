// https://www.codechef.com/problems/FLIPPRE


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
        int n, count = 0, zero = 0, one = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int j = 0; j < n; j++) {
            if (s[j] == '0') zero++;
            else one++;
            if (zero == one) count++;
        }

        int result = 1LL << count;
        cout << result << "\n";
    }    
    return 0;
}