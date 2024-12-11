// /https://www.codechef.com/START164C/problems/SWAPFLIP
// Swap and flip


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    string s, t;
	    cin >> s;
	    cin >> t;
	    
	    if (s == t) {
	        cout << "YES" << endl;
	        continue;
	    }
	    
	    int cs0 = 0, cs1 = 0, ct0 = 0, ct1 = 0;
	    for (char it : s) {
	        if (it == '0') cs0++;
	        else cs1++;
	    }
	    
	    
	    for (char it : t) {
	        if (it == '0') ct0++;
	        else ct1++;
	    }
	    
	   // int a = min(cs0, cs1);
	   // int b = max(cs0, cs1);
	    
	   // int c = min(ct0, ct1);
	   // int d = max(ct0, ct1);
	    
	   // if (a == c && b == d) cout << "YES" << endl;
	    if (cs0 == ct0 && cs1 == ct1) cout << "YES" << endl;
	   // else if (abs(cs1 - ct1) % 2 == 0) cout << "YES" << endl;
	   // else if (abs(cs0 - ct0) % 2 == 0) cout << "YES" << endl;
	    else if ((abs(cs0 - ct0) % 2 == 0) || (abs(cs1 - ct1) % 2 == 0)) cout << "YES" << endl;
	    else cout << "NO" << endl;
	    
	}
}
