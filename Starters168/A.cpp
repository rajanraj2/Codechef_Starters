// https://www.codechef.com/problems/BIG
// Big Achiever


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n), result(n, 0);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    int maxi = arr[0];
	    for (int i = 0; i < n; i++) {
	        if (arr[i] >= maxi) result[i] = 1;
	        maxi = max(maxi, arr[i]);
	        cout << result[i] << " ";
	    }
	    cout << endl;
	}
}
