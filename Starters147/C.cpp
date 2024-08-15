// Link - https://www.codechef.com/problems/TRUTHLIE
// Truth tellers and liars 101


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
	    int result;
	    if (n > m) {
	        result = 2 * m + 1;
	    }
	    else {
	        result = -1;
	    }
	    cout << result << endl;
	    
	}
	
}
