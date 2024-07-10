// Link - https://www.codechef.com/START142D/problems/PENALTYSHOOT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    if (x  > (y + 1) || (x + 2) < y) cout << "NO\n";
	    else cout << "YES\n";
	}
}
