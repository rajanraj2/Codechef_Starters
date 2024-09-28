// Link - https://www.codechef.com/problems/BFLY?tab=statement
// Butterfly


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int r, g, b;
	    cin >> r >> g >> b;
	    string result = "NO";
	    if (r <= b + g && b <= r + g && g <= r + b) result = "YES";
	    cout << result << endl;
	}
}
