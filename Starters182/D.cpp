// https://www.codechef.com/problems/MRC


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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string result = "YES";
        
        vi arr;
        char prev = s[0];
        int len = 1;
        bool check = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != prev) {
                if (prev == 'B') arr.pb(len);
                else arr.pb(-1 * len);
                if (len >= k) check = false;
                len = 1;
                prev = s[i];
            }
            else len++;
        }
        arr.pb(len);
        if (len >= k || check) {
            cout << result << "\n";
            continue;
        }
        
        int one = 1;
        bool flag = false;
        for (int i = 0; i < arr.size(); i++) {
            // if (n == 4 && k == 2) cout << "\n # " << arr[i] << " @\n";
            if (abs(arr[i]) >= k) {
                if (flag || abs(arr[i]) >= (2 * k) || i == arr.size() - 1) {
                    result = "NO";
                    break;
                }
                flag = true;
                int rem = abs(arr[i]) - k + 1;
                if (rem >= k) {
                    result = "NO";
                    break;
                }
                
                int next = abs(arr[i + 1]) - k - 1;
                next = max(one, next);
                if (abs(arr[i + 1]) == 1) {
                    if (i + 2 < arr.size()) {
                        if (arr[i] )
                        if (arr[i + 2] > 0) arr[i + 2] += rem;
                        else arr[i + 2] -= rem;
                    }
                }
                else i++;
                if (next >= k) {
                    result = "NO";
                    break;
                }

            }
        }
        
        cout << result << "\n";
    }    
    return 0;
}