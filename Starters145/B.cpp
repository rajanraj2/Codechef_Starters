// Link - https://www.codechef.com/START145D/problems/GMGM
// Gun master


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, d;
	    cin >> n >> d;
	    vector<int> arr(n);
	    bool last = 0;
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i] > d && last == 0) {
	            count++;
	            last = 1;
	        }
	        else if (arr[i] <= d && last == 1) {
	            count++;
	            last = 0;
	        }
	    }
	    cout << count << endl;
	}
}
