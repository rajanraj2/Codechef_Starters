// https://www.codechef.com/problems/P3_175


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
        string a, b, c;
        cin >> a >> b >> c;
        int a0 = 0, a1 = 0, b0 = 0, b1 = 0, c0 = 0, c1 = 0, result;
        
        for (char ch : a) {
            if (ch == '0') a0++;
            else a1++;
        }
        for (char ch : b) {
            if (ch == '0') b0++;
            else b1++;
        }
        for (char ch : c) {
            if (ch == '0') c0++;
            else c1++;
        }
        int zero = a0 + b0 + c0;
        int one = a1 + b1 + c1;
        
        if (zero % n != 0 || one % n != 0) result = -1;
        else if (zero == 0 || one == 0) result = 0;
        else if (zero == n) result = min({a1, b1, c1});
        else if (one == n) result = min({a0, b0, c0});
        
        cout << result << "\n";
    }    
    return 0;
}