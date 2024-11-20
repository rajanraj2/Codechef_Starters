// https://www.codechef.com/START161C/problems/TWOCARD


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr1(n), arr2(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr1[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> arr2[i];
	    }
	    
	    
	    int maxa1 = arr1[0], maxa2 = arr1[1];
	    int maxa1b = arr2[0], maxa2b = arr2[1];
	    if (arr1[1] > arr1[0]) {
	        swap(maxa1, maxa2);
	        swap(maxa1b, maxa2b);
	    }
	    
	    for (int i = 2; i < n; i++) {
	        if (arr1[i] > maxa1) {
	            if (maxa1 > maxa2) {
	                maxa2 = maxa1;
	                maxa2b = maxa1b;
	            }
	            maxa1 = arr1[i];
	            maxa1b = arr2[i];
	        }
	        else if (arr1[i] > maxa2) {
	            maxa2 = arr1[i];
	            maxa2b = arr2[i];
	        }
	    }
	    
	    int maxi = arr2[0];
	    int maxia = arr1[0];
	    for (int i = 1; i < n; i++) {
	        if (arr2[i] > maxi) {
	            maxi = arr2[i];
	            maxia = arr1[i];
	        }
	        else if (arr2[i] == maxi) {
	            maxia = max(maxia, arr1[i]);
	        }
	    }
	    
	    int alice = -1, bob = -1;
	    if (maxa1 >= maxi) {
	        alice = maxa1;
	        bob = max(maxa2, maxa2b);
	    }
	    else {
	        alice = max(maxi, maxia);
	        if (maxia != maxa1) bob = max(maxa1, maxa1b);
	        else bob = max(maxa2, maxa2b);
	    }
	    
	    if (alice > bob) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
}
