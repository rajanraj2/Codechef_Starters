// https://www.codechef.com/problems/DPF


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
        int n, k, d;
        cin >> n >> k >> d;
        
        vi arr(n);
        ivec(arr);
        
        sort(arr.begin(), arr.end());
        int rem = n - k, total = 0;
        int maxi = d * rem;
        
        for (int i = 0; i < rem; i++) total += ((d - 1) / arr[i] + 1);
        int result = min(maxi, total);
        
        cout << result << "\n";
    }    
    return 0;
}