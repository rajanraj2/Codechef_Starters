// https://www.codechef.com/problems/NICEARRAY
// Nice Array


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    vector<int> a(n), b(n), c(n);
	    int sb = 0, sc = 0;
	    
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        b[i] = floor((double)a[i] / (double)k);
	        c[i] = ceil((double)a[i] / double(k));
	        sb += b[i];
	        sc += c[i];
	    }
	    sort(b.begin(), b.end());
	    sort(c.begin(), c.end());
	    
	    if (sb == 0 || sc == 0) {
	        cout << "YES" << endl;
	        continue;
	    }
	    
	    
	    bool flag = true;
	    if (sb > 0) flag = false; 
	    int sum = sb;
	    string result = "NO";
	    
	    for (int i = 0; i < n; i++) {
	        if (flag) {
	            if (c[i] > b[i]) sum++;
	            if (sum == 0) {
	                result = "YES";
	                break;
	            }
	        }
	        else {
	            if (c[i] < b[i]) sum--;
	            if (sum == 0) {
	                result = "YES";
	                break;
	            }
	        }
	    }
	    
	    cout << result << endl;
	    
	    
	}
}
