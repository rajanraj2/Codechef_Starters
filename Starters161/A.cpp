// https://www.codechef.com/START161C/problems/DONUTSELL


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
	    vector<int> arr(n);
	    vector<int> customer(m);
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    for (int i = 0; i < m; i++) {
	        cin >> customer[i];
	    }
	    
	    for (int i = 0; i < m; i++) {
	        if (arr[customer[i] - 1] <= 0) count++;
	        else arr[customer[i] - 1]--;
	    }
	    cout << count << endl;
	}
}
