// https://www.codechef.com/START166C/problems/BORROWBOOK
// Chefland Library


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
	    map<int, int> mpp;
	    int result = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        mpp[arr[i]] = i + 1;
	    }
	    for (auto it : mpp) {
	        result += it.second;
	    }
	    cout << result << endl;
	}
}
