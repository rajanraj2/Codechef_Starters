// Link - https://www.codechef.com/START140D/problems/TREATS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
	    if (n == 0 or m == 0) {
	        cout << 0 << endl;
	        continue;
	    }
	    vector<int> A(n);
	    vector<int> B(n);
	    vector<int> arr1(m,0);
	    vector<int> arr2(m,0);
	    int result = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	        A[i] = A[i] % m;
	        A[i] = m - A[i];
	        A[i] = A[i] % m;
	        arr1[A[i]]++;
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> B[i];
	        B[i] = B[i] % m;
	        arr2[B[i]]++;
	    }
	    for (int i = 0; i < m; i++) {
	        result += arr1[i] * arr2[i];
	    }
	    cout << result << endl;
	}
	return 0;
}
