// https://www.codechef.com/problems/BUYORDEREZ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    if (arr[0] == 1 || arr[n - 1] == 0) cout << 2 * n - 1 << endl;
	    else cout << 2 * n - 2 << endl;
	}
}
