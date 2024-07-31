// Link - https://www.codechef.com/START145D/problems/MEBA
// Make my array equal


#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    int overall_gcd = arr[0];
	    for (int i = 1; i < n; i++) {
	        overall_gcd = gcd(overall_gcd, arr[i]);
	    }
	    
	    if (overall_gcd == 1) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    
	}
	return 0;
}
