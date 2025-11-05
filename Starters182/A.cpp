// https://www.codechef.com/problems/QBGI


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
        string s;
        cin >> s;
        int g = 0, b = 0, count = 0;
        for (auto it : s) {
            if (it == 'G') g++;
            else b++;
            count++;
            if (b > (2 * g)) break;
        }
        cout << count << "\n";
        
    }    
    return 0;
}