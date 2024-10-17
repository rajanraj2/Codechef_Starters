// Link - https://www.codechef.com/START156D/problems/EVENHATE


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int even = 0, odd = 0;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i] % 2 == 0) even++;
	        else odd++;
	    }
	    int result = 0;
	    if (odd > 0) {
	        if (even == 0) result = ceil(odd / 2.0);
	        else result = 1 + even + (odd - 1) / 2;
	    }
	    cout << result << endl;
	}
}
