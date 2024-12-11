// https://www.codechef.com/START164C/problems/CONSPERM
// Construct Permutation


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int m = n + 1;
	    vector<int> result(n);
	    vector<int> even, odd;
	   
	   if (n % 2 == 0) {
	       cout << -1 << endl;
	       continue;
	   }
	    
	    for (int i = 1; i <= n; i++) {
	        if (i % 2 == 0) even.push_back(i);
	        else odd.push_back(i);
	    }
	    
	    reverse(even.begin(), even.end());
	    int j = 0, k = 0;
	    
	    for (int i = 0; i < n; i++) {
	        if (i % 2) result[i] = even[j++];
	        else result[i] = odd[k++];
	    }
	     
	    for (int i = 0; i < n; i++) {
	        cout << result[i] << " ";
	    }
	    cout << endl;
	    
	}

}
