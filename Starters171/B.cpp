// https://www.codechef.com/problems/SWISHGAME


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int m, k;
	    cin >> m >> k;
	    string s;
	    cin >> s;
	    int count = 0;
	    for (char ch : s) {
	        if (ch == 'S') count++;
	    }
	    if (count >= k) {
	        cout << m << endl;
	        continue;
	    }
	    
	    int result = k + (m - count) - 1; 
	    cout << result << endl;
	}
}
