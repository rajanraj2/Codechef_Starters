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
	    long long result = 0;
	    result += (long long)arr[n - 1] + arr[k - 1] + arr[n - 2];
	    if (k <= 1) result += (long long)arr[n - 1];
	    else result += (long long)arr[0];
	    cout << result << endl;
	}
}
