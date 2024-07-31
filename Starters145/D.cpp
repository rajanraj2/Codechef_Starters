// Link - https://www.codechef.com/START145D/problems/DLSB
// Make bob win


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
	    
	    int z = 0;
	    bool inZ = false;
	    
	    for (char ch : s) {
	        if (ch == '0') {
	            if (!inZ) {
	                z++;
	                inZ = true;
	            }
	        }
	        else {
	            inZ = false;
	        }
	    }
	    
	    cout << z << endl;
	}
}
