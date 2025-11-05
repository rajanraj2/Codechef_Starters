// https://www.codechef.com/problems/FINDOUT


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
        
        set<int> st;
        vi arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        sort(arr.begin(), arr.end());
        
        if (n < 2) {
            if (2 * arr.front() != arr.front()) {
                cout << arr.front() << " " << arr.front() << "\n";
            }
            else cout << -1 << "\n";
            continue;
        }
        

        if (2 * arr.back() > arr.back()) {
            cout << arr[n - 1] << " " << arr[n - 1] << "\n";
        }
        else if (2 * arr[0] < arr[0]){
            cout << arr[0] << " " << arr[0] << "\n";
        } 
        else {
            int count = st.size();
            if (st.find(0) == st.end()) count--;
            if (count <= 1) {
                cout << -1 << "\n";
            } 
            else if (st.find(arr[0] + arr[n - 1]) == st.end()) {
                cout << arr[0] << " " << arr[n - 1] << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
    }    
    return 0;
}