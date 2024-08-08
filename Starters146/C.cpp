// Link - https://www.codechef.com/problems/KNOCKOUT
// Knockout Tournament


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    vector<int> arr(16, 0);
	    vector<int> arr1(16);
	    vector<int> arr2(8);
	    vector<int> arr3(4);
	    vector<int> arr5(2);
	    for (int i = 0; i < n; i++) {
	        cin >> arr1[i];
	    }
	    sort(arr1.begin(), arr1.end());
	    for (int i = 0; i < 8; i++) {
	        if (arr1[i] > arr1[15 - i]) {
	            arr[i]++;
	            arr2[i] = arr1[i];
	        }
	        else {
	            arr[15 - i]++;
	            arr2[i] = arr1[15 - i];
	        }
	    }
	    
	    for (int i = 0; i < 4; i++) {
	        if (arr2[i] > arr2[7 - i]) {
	            arr[i]
	        }
	    }
	    
	}
    
}
