// https://www.codechef.com/START164C/problems/SPC2025Q2
// Itz simple


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k, p;
	    cin >> n >> k >> p;
	    vector<int> arr(n);
	    int maxi = 0, sum = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        sum += arr[i];
	        maxi = max(maxi, arr[i]);
	    }
	    sum -= maxi;
	    
	    if (maxi + k > sum + p) cout << "VED" << endl;
	    else if (maxi + k < sum + p) cout << "VARUN" << endl;
	    else cout << "EQUAL" << endl;
	}
}
