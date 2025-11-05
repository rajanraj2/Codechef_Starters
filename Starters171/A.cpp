// https://www.codechef.com/problems/ADVITIYA


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    string s;
	    cin >> s;
	    int result = 0;
	    string org = "ADVITIYA";
	    for (int i = 0; i < s.size(); i++) {
	        int val = (org[i] - s[i]);
	        if (val >= 0) result += val;
	        else result += (26 + val);
	    }
	    cout << result << endl;
	}
}
