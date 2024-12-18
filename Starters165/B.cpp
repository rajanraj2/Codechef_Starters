// https://www.codechef.com/problems/BDISC
// Bulk Discount


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, result = 0;
	    cin >> n;
	    vector<int> a(n), b(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    sort(a.begin(), a.end());
	    for (int i = 0; i < n; i++) {
	        b[i] = max(0, a[i] - i);
	        result += b[i];
	    }
	    cout << result << endl;
	}
}
