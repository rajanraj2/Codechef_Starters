// https://www.codechef.com/problems/RBGM
// Later


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, count = 0;
	    cin >> n;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    for (int i = 0; i < n; i++) if (arr[i] == i + 1) count++;
	    
	    if (count == n) cout << n << endl;
	    else if (count > 0) cout << n - 1 << endl;
	    else cout << n - 2 << endl;
	}
}