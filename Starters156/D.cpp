// Link - https://www.codechef.com/START156D/problems/PARTSCORE


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    vector<int> arr(n);
	    vector<int> s1, s2;
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    sort(arr.begin(), arr.end());
	    int result = 0;
	    
	    result += arr[n - 1] + arr[n - 2];
	    if (k <= 1) result += arr[n - 1] + arr[k - 1];
	    else result += arr[0] + arr[n - k - 1];
	    
	    cout << result << endl;
	}
}

