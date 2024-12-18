// https://www.codechef.com/problems/STABARR
// Stable Array


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, result = 0;
	    cin >> n;
	    vector<int> a(n);
	    int maxi = -1;
	    bool flag = true;
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        maxi = max(maxi, a[i]);
	        if (flag && i > 0 && a[i] > a[i - 1]) flag = false;
	    }
	    if (flag) {
	        cout << 0 << endl;
	        continue;
	    }
	    
	    
	    
	    int count = 0, index = 0;
	    for (int i = 0; i < n; i++) {
	        if (a[i] == maxi) {
	           // cout << i << " " << index << endl;
	            result = max(result, i - index);
	            index = i + 1;
	        }
	    }
	    
	    
	    cout << result << endl;
	}
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 	    int n, count = 0;
// 	    cin >> n;
// 	    vector<int> a(n);
// 	    for (int i = 0; i < n; i++) {
// 	        cin >> a[i];
// 	    }
	    
// 	    bool flag = true;
// 	    while (flag) { 
// 	        for (int i = 0; i < n - 1; i++) {
// 	            if (a[i] < a[i + 1]) {
// 	                a[i] = a[i + 1];
// 	                flag = false;
// 	            }
// 	        }
// 	        if (flag) break;
// 	        else {
// 	            count++;
// 	            flag = true;
// 	        }
// 	    }
// 	    cout << count << endl;
// 	}
// }

