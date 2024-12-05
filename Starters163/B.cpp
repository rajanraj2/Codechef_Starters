// https://www.codechef.com/problems/MINBUY
// Minimum Types


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    vector<int> a(n), b(n), arr(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        arr[i] = a[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> b[i];
	        arr[i] *= b[i];
	    }
	    
	    sort(arr.rbegin(), arr.rend());
	    int sum = 0, count = 0, ans = -1;
	    for (int i = 0; i < n; i++) {
	        sum += arr[i];
	        count++;
	        if (sum >= x) {
	            ans = count;
	            break;
	        }
	    }
	    cout << ans << endl;
	}
}
