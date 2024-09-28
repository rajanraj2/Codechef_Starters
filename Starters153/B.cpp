// Link - https://www.codechef.com/problems/AP?tab=statement
// Make arithmetic progression


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    int result = 0;
	    if (z- y != y - x) result = 1;
	    cout << result << endl;
	}
}
