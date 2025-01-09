// https://www.codechef.com/problems/P2P
// Make Odd


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    string a, b;
	    cin >> a >> b;
	    
	    int one = 0, zero = 0, diff = 0, score = 0;
	    for (int i = 0; i < n; i++) {
	        if (a[i] == b[i]) {
	            if (a[i] == '1') one++;
	            else zero++;
	        }
	        else diff++;
	    }
	    string result = "NO";
	    score += one;
	    
	    if (score % 2 == 1) result = "YES";
	    else if (diff > 0) result = "YES";
	    cout << result << endl;
	}
}
