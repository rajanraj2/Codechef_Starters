// https://www.codechef.com/START178B/problems/PLACE0110


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
        int x, y;
        cin >> x >> y;
        int result = x + y;
        int diff = abs(x - y) - 1;
        result = max(result, result + diff);
        cout << result << "\n";
        
    }    
    return 0;
}