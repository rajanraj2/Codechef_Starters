// https://www.codechef.com/problems/ORANGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    int mini = 10 * n;
	    int maxi = 12 * n;
	    bool result = false;
	    if (k >= mini && k <= maxi) result = true;
	    if (result) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
}
