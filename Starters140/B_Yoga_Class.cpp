// Link - https://www.codechef.com/START140D/problems/YOGACLASS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, x, y;
	    cin >> n >> x >> y;
	    int result = 0;
	    if (y > (2 * x)) {
	        result += n/2 * y;
	        result += (n - 2*(n/2)) * x;
	    }
	    else {
	        result += n * x;
	    }
	    cout << result << endl;
	}
}
