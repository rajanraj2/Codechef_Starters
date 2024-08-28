// Link - https://www.codechef.com/problems/P3149


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int result = 0;
	    vector<int> arr(n);
	    bool check = true;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i] > 0) check = false;
	    }
	    if (check) {
	        cout << 0 << endl;
	        continue;
	    }
	    check = false;
	    for (auto it : arr) {
	        if (it > 0) check = true;
	        if (check && it < 0) {
	            result++;
	        }
	    }
	    for (int i = n - 1; i >= 0; i--) {
	        if (arr[i] <= 0) result--;
	        else break;
	    }
	    cout << max(result, 0) << endl;
	}

}
