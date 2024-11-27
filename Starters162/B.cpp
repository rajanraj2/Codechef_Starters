// https://www.codechef.com/problems/ADJSUMLOST
// Adjacent Sums Array


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n - 1);
	    vector<int> result(n);
	    for (int i = 0; i < n - 1; i++) {
	        cin >> arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    result[0] = 1;
	    for (int i = 1; i < n; i++) {
	        result[i] = arr[i - 1] - result[i - 1];
	    }
	    for (int it : result) cout << it << " ";
	    cout << endl;
	    
	}

}
