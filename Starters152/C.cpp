// Link - https://www.codechef.com/problems/WFWIN


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int m, p;
	    cin >> m >> p;
	    int count = 0;
	    
	    while (m < 299 && m + p + 20 + 1 <= 1000) {
	        count++;
	        m++;    
	        p += 20;
	        
	    }
	    int newtime = m + p;
	    if (m < 300 && newtime <= 1000) cout << count << endl;
	    else cout << 0 << endl;
	}
}
