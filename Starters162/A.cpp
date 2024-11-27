// https://www.codechef.com/problems/ASSIGNSCORE
// Assignment Score


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int sum = 0;
	    int result;
	    vector<int> arr(n + 1);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    int total = (n + 1) * 100;
	    int half = total / 2;
	    result = half - sum;
	    if (result > 100) cout << -1 << endl;
	    else {
	        result = max(result, 0);
	        cout << result << endl;
	    }
	    
	   // double val = sum / (n + 1);
	   // if (val > 50.0) cout << -1 << endl;
	   // else if ((sum + 100) / (n + 1) < 50.0) cout << -1 << endl;
	   // else cout << (50 * (n + 1) / sum) << endl;
	   // int x;
	   // double x = ceil(50.0 * (n + 1) - sum);
	    
	   // if (x <= 100) cout << x << endl;
	   // else cout << -1 << endl;
	}
}
