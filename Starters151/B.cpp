// Link - https://www.codechef.com/problems/GYMDAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int d, x, y;
	    cin >> d >> x >> y;
	    int cost = x, budget = y, result = -1;
	    if (y >= x) {
	        cout << 0 << endl;
	    }
	    else {
	        for (int i = 1; i <= y; i++) {
	            int dis = d * i * x / 100;
	            if (cost - dis <= budget - i) {
	                result = i;
	                break;
	            }
	        }
	        cout << result << endl;
	    }
	}

}


