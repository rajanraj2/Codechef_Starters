// Link - https://www.codechef.com/START156D/problems/LONGQUEUE


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
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    int result = n;
	    for (int i = result - 1; i > 0; i--) {
	        if (arr[i - 1] <= arr[n - 1] / 2) result--;
	        else break;
	    }
	    cout << result << endl;
	}
}
