// https://www.codechef.com/problems/REVALT
// Reverse and alternate


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
	    bool flag = true;
	    int left = -1, right = -1;
	    for (int i = 1; i < n; i++) {
	        if (flag && s[i - 1] == s[i]) {
	            left = i;
	            flag = false;
	        }
	        else if (s[i - 1] == s[i]) {
	            right = i - 1;
	            break;
	        }
	    }
	    if (left == -1) {
	        cout << "YES" << endl;
	        continue;
	    }
	    
	    if (right == -1) {
	        cout << "NO" << endl;
	        continue;
	    }
	    
        string result = "YES";
        string str = s.substr(left, right - left + 1);
        reverse(str.begin(), str.end());
	    string ans = s.substr(0, left) + str + s.substr(right + 1, n - right);
	    for (int i = 0; i < n; i++) {
	        if (ans[i] == ans[i - 1]) {
	            result = "NO";
	            break;
	        }
	    }
	    cout << ans << endl;
	    cout << result << endl;
	}
}
