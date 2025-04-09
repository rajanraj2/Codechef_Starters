// https://www.codechef.com/problems/GOODMATRIX


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
        int n, m;
        cin >> n >> m;
        int result = n * m;
        
        vector<vi> arr(n, vi(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        
        vi rc = {1, -1};
        for (int r : rc) {
            for (int c : rc) {
                unordered_map<int, int> mpp;
                int maxi = 0;
                
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        int row = r * i;
                        int col = c * j;
                        int req = arr[i][j] - (row + col);
                        mpp[req]++;
                        maxi = max(maxi, mpp[req]);
                    }
                }
                result = min(result, (n * m) - maxi);
            }
        }
        
        cout << result << "\n";
    }    
    return 0;
}