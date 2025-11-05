// https://www.codechef.com/problems/LSU


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
        int n, cost;
        cin >> n >> cost;
        
        string str;
        cin >> str;
        vector<int> arr(5);
        for (char ch : str) {
            int ind = ch - 'A';
            arr[ind]++;
        }
        sort(arr.begin(), arr.end());
        int result = 0, count = 1;
        
        for (auto it : arr) {
            if (it == 0) continue;
            
            int trans = (it * (2 * count + (it - 1))) / 2;
            if (cost <= trans) {
                result += cost;
            }
            else {
                result += trans;
                count += it;
            }
        }
        cout << result << "\n";
   
    }    
    return 0;
}