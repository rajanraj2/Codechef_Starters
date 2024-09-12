// Link - https://www.codechef.com/problems/SAMESTR

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
	    if (n <= 1) {
	        cout << n << endl;
	        continue;
	    }
	    int count0 = 0, count1 = 0, result = 0;
	    
	    for (int i = 0; i < n; i++) {
	        if (s[i] == '0') count0++;
	        else count1++;
	    }
	    
	    for (int i = 1; i <= n; i++) {
	        
	        if ((count0 > 0 && count0 != 1 && i % count0 == 0) || (count1 > 0 && count1 != 1 && i % count1 == 0)) {
	           // cout << i << "@" << endl;
                result++;
            }
            else if ((count0 > 1 && i % count0 == 2 && count0 > i) || (count1 > 1 && i % count1 == 2)) {
                result++;
                // cout << i << "#" << endl;
            }
	    }
	    if (count0 == 1) result++;
	    if (count1 == 1) result++; 
	    
	    cout << result << endl;
	    
	    
	}
}

