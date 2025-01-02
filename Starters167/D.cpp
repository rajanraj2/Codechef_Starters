// https://www.codechef.com/START167C/problems/TEMPBAL
// Temperature Balance


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<long long> arr(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    long long result = 0;
	    long long pre = 0;
	    for (int i = 0; i < n - 1; i++) {
	        result += (long long)abs(arr[i]);
	        arr[i + 1] += arr[i];
	       // pre += arr[i]; // till i < n
	       // result += abs(pre);
	    }
	    cout << result << endl;
	}

}
