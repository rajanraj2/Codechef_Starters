// https://www.codechef.com/problems/P4_175


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
        string s;
        cin >> s;
        
        int count = 0, zero = 0;
        if (s[0] == '0') zero++;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) count++;
            if (s[i] == '0') zero++;
        } 
        int one = s.size() - zero;
        
        int val = abs(one - zero);
        if (count == 0) cout << 0 << "\n";
        else if (val == 0 || val == 1) cout << 1 << "\n";
        else if (val <= 3) cout << 2 << "\n";
        else cout << 3 << "\n";
    }    
    return 0;
}