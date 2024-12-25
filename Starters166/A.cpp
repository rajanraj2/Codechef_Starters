// https://www.codechef.com/START166C/problems/WRAPGIFTS
// christmas gifts


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int h, l, w;
	    cin >> h >> l >> w;
	    int area = 2 * ((l * w) + (l * h) + (w * h));
	    int ans = 1000 / area;
	    cout << ans << endl;
	}
}
