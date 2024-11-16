// https://www.codechef.com/problems/EQUATEST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, m;
        cin >> n >> m;
        
        string s, t;
        cin >> s >> t;
        
        int sCount = count(s.begin(), s.end(), 'a');
        int tCount = count(t.begin(), t.end(), 'a');
        
        if (sCount == tCount) {
            int p = s.find('a');
            int q = t.find('a');
            
            if (p == string::npos) p = n;
            if (q == string::npos) q = m;
            
            cout << ((p == q) ? "Yes" : "No") << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 	    int n, m;
// 	    cin >> n >> m;
// 	    string s, t;
// 	    cin >> s >> t;
// 	    int scount = 0, tcount = 0;
// 	    int sleft = -1, tleft = -1;
// 	    bool first = true, result = false;
	    
// 	    for (int i = 0; i < n; i++) {
// 	        if (s[i] == 'a') {
// 	            scount++;
// 	            if (first) {
// 	                sleft = i;
// 	                first = false;
// 	            }
// 	        }
// 	    }
// 	    first = true;
	    
// 	    for (int i = 0; i < m; i++) {
// 	        if (t[i] == 'a') {
// 	            tcount++;
// 	            if (first) {
// 	                tleft = i;
// 	                first = false;
// 	            }
// 	        }
// 	    }
	    
// 	    if (scount == 0 && tcount == 0 && n != m) result = false;
// 	    else if (scount == tcount && sleft == tleft) result = true;
// 	    if (result) cout << "YES" << endl;
// 	    else cout << "NO" << endl;
// 	}
// }
