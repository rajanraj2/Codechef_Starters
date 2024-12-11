// https://www.codechef.com/START164C/problems/SPC2025Q5
// Halloween array


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, l, r;
	    cin >> n >> l >> r;
	    vector<int> arr(n);
	    long long prod = 1;
	    set<int> st;
	    bool check = false;
	    
	    
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i]; 
	        if (st.count(arr[i])) prod = 0;
	        else st.insert(arr[i]);
	    }
	    
	    if (prod == 0) {
	        if (l <= 0 && r >= 0) cout << "YES" << endl;
	        else cout << "NO" << endl;
	        continue;
	    }
	    
	    prod = 1;
	    for (int i = 0; i < n; i++) {
	        for (int j = i + 1; j < n; j++) {
	            prod *= (arr[i] ^ arr[j]);
	            if (prod > r) {
	                check = true;
	                break;
	            }
	        }
	        if (check) break;
	    }
	    
	    
	    if (check) {
	        cout << "NO" << endl;
	        continue;
	    }
	    if (prod >= l && prod <= r) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

}
