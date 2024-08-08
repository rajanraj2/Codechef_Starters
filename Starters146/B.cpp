// Link - https://www.codechef.com/problems/NOWINNER
// No Winner


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int a, b, c, m;
	    cin >> a >> b >> c >> m;
	    int d1 = abs(a - b);
	    int d2 = abs(b - c);
	    int d3 = abs(c - a);
	    
	    if (d1 <= m || d2 <= m || d3 <= m) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	    
	   // while (m--) {
	   //     if (d1 <= d2 && d1 <= d3) {
	   //         d1++;
	   //     }
	   //     else if (d2 <= d1 && d2 <= d3) {
	   //         d2++;
	   //     } 
	   //     else {
	   //         d3++;
	   //     }
	   // }
	    
	   // if (d1 == d2 || d2 == d3 || d1 == d3) {
	   //     cout << "YES\n"; 
	   // }
	   // else {
	   //     cout << "NO\n";
	   // }
	    
	}
}
