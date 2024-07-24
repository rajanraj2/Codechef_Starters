// Link - https://www.codechef.com/START144D/problems/BUDGET25
// Budget Allotment


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    vector<int> arr(n);
	    long long extra = 0;
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i] >= x) {
	            extra += arr[i] - x;
	            count++;
	        }
	    }
	    for (int i = 0; i < n; i++) {
	        if (arr[i] < x) {
	            int diff = x - arr[i];
	            if (extra >= diff) {
	                extra -= diff;
	                count++;
	            }
	        }
	    }
	    cout << count << endl;
	}
}
