// Link - https://www.codechef.com/problems/INDEPENDENCE
// Independence day 101


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    int  maxi = max({a, b, c});
	    int total = a + b + c;
	    if (maxi <= total - maxi + 1) cout << "YES\n";
	    else cout << "NO\n";
	    
	}
	return 0;
}
