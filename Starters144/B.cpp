// Link - https://www.codechef.com/START144D/problems/XYZ343
// Savings Account


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    int n = x;
	    int total = n * y;
	    while (total > z) {
	        if (total > z) {
	            n--;
	            total = n * y;
	        }
	    }
	    cout << x - n << endl;
	}
}
