// Link - https://www.codechef.com/START140D/problems/MAKEPERM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> A(n);
	    vector<int> C(n);
	    for (int i = 0; i < n; i++) {
	        C[i] = i + 1;
	        cin >> A[i];
	    }
	    sort(A.begin(), A.end());
	    string result = "YES";
	    for (int i = 0; i < n; i++) {
	        if (A[i] > C[i]) {
	            result = "NO";
	            break;
	        }
	    }
	    cout << result << endl;
	}
	return 0;
}
