// https://www.codechef.com/problems/ONETOTHREE
// Later


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
	    int sum = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    for (int i = 1; i < n - 1; i++) {
	        if (arr[i] == 3 && arr[i - 1] + arr[i + 1] == 4) {
	            arr[i] = 1; 
	            sum -= 2;
	        }
	    }
	    for (int i = n - 2; i > 0; i--) {
	        if (arr[i] == 3 && arr[i - 1] + arr[i + 1] == 4) {
	            arr[i] = 1; 
	            sum -= 2;
	        }
	    }
	    cout << sum << endl;
	}
}
