// https://www.codechef.com/problems/P2169
// Opposite Attract


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    string x = s;
	    for (int i = 0; i < n; i++) {
	        if (s[i] == '1') x[i] = '0';
	        else x[i] = '1';
	    }
	    cout << x << endl;
	}
}
