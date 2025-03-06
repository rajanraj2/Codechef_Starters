// https://www.codechef.com/problems/XLSL


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
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        
        int result = 0, rem = 0, zero = 0;
        if (c <= z) result += c;
        else result += z;
        rem += max(zero, z - c);
        
        if (b <= y) {
            result += b;
            rem += max(zero, y - b);
        }
        else {
            result += y;
            int val = max(zero, b - y);
            int value = min(val, rem);
            result += value;
            rem -= value;
            rem = max(zero, rem);
        }
        
        if (a <= (x + rem)) {
            result += a;
        } 
        else result += (x + rem);
        
        cout << result << "\n";
    }    
    return 0;
}