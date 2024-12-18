// https://www.codechef.com/problems/POSTPERI
// Poster Perimeter


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, m, k, result = INT_MAX;
	    cin >> n >> m >> k;
	    for (int i = 1; i <= n; i++) {
	        for (int j = 1; j <= m; j++) {
	            int diff = abs((2 * (i + j)) - k);
	            result = min(result, diff);
	        }
	    }
	    cout << result << endl;
	}
}
