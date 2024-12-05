// https://www.codechef.com/problems/BINARYSUM
// Binary Sum


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    string result = "NO";
	    int val = n / 2;
	    if (n % 2 == 0) {
	        if (val == k) result = "YES";
	    }
	    else {
	        if (val == k || val + 1 == k) result = "YES";
	    }
	    cout << result << endl;
	}
}
