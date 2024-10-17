// Link - https://www.codechef.com/START156D/problems/COUNTTRIP


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
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    for (int i = 0; i < n; i++) {
	        for (int j = 0; j < n; j++) {
	            for (int k = 0; k < n; k++) {
	                int check = arr[i] - arr[k];
	                if (check < 0) check *= -1;
	                int c2 = i - j;
	                int c3 = j - k;
	                if (c2 < 0) c2 *= -1;
	                if (c3 < 0) c3 *= -1;
	                if (check == c2 + c3) result++;
	            }
	        }
	    }
	    cout << result << endl;
	}
}
