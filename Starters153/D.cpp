// Link - https://www.codechef.com/problems/KARR?tab=statement
// Anohter game


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n), arr2(n);
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    arr2 = arr;
	    sort(arr2.begin(), arr2.end());
	   // map<int, int> mpp;
	   // for (int i = 0; i < n; i++) {
	   //     mpp[arr[i]] = i;
	   // }
	    int result = 0;
	    int mini = arr2[0], maxi = 0;
	    bool check = false;
	    
	    for (int i = n - 1; i >= 0; i--) {
	        if (arr2[i] != arr[i]) {
	            check = true;
	            maxi = max(maxi, arr2[i]);
	           // result = max(result, arr2[i] + arr[i]);
	        }
	        
	       // swap(arr[i], arr[mpp[arr2[i]]]);
	    }
	    
	    if (check) result = mini + maxi;
	    else result = 0;
	    
	    cout << result << endl;
	}
}

