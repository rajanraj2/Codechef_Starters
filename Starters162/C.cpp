// https://www.codechef.com/problems/PERMMODK
// Permutation mod k 


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    if ((k == 1) || (n % 2 == 1 && k == 2)) {
	        cout << -1 << endl;
	        continue;
	    }
	    vector<int> arr(n);
	    
	    if (n % 2 == 0) {
    	    for (int i = 1; i <= n; i++) {
    	        if (i % 2) arr[i - 1] = i + 1;
    	        else arr[i - 1] = i - 1;
    	    }
	    }
	    else {
	        arr[n - 1] = n - 2; arr[n - 2] = n; arr[n - 3] = n - 1;
	        for (int i = 1; i <= n - 2; i++) {
    	        if (i % 2) arr[i - 1] = i + 1;
    	        else arr[i - 1] = i - 1;
    	    }
	    }
	    
	    for (int i = 0; i < n; i++) cout << arr[i] << " ";
	    cout << endl;
	}
}
