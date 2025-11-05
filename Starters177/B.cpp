// https://www.codechef.com/problems/BOX2


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
        int x, y, k;
        cin >> x >> y >> k;
        int result = -1;
        int diff = abs(x - y);
        int parity = diff % 2;
        if (parity == k % 2) result = abs(diff - k) / 2;
        cout << result << "\n";
        
    }    
    return 0;
}