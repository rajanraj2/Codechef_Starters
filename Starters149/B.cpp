// Link - https://www.codechef.com/START149D/problems/P2149


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int a, b, x;
	    cin >> a >> b >> x;
	    int result = 0;
	    if ((a * b) <= (x * x)) result = 0;
	    else if ((a * 1) <= (x * x) || (1 * b) <= (x * x)) {
	        result = 1;
	    }
	    else {
	        result = 2;
	    }
	    cout << result << endl;
	}
}
