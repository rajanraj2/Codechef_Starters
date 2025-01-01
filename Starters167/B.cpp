// https://www.codechef.com/START167C/problems/DELNQ
// Delete Not Equal


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
	    char prev = s[0];
	    int result = n;
	    for (int i = 0; i < n; i++) {
	        if (s[i] != prev) {
	            result = 1;
	            break;
	        }
	    }
	    cout << result << endl;
	}
}
