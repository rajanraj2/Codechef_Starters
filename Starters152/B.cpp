// Link - https://www.codechef.com/problems/MNR


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    int result = INT_MAX;
	    
	    result = min(result, arr[n - 1] - arr[2]);
	    result = min(result, arr[n - 3] - arr[0]);
	    result = min(result, arr[n - 2] - arr[1]);
	    
	    cout << result << endl;
	}
}
