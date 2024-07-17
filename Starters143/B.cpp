// Link - https://www.codechef.com/START143D/problems/MAXCOIN
// Maximum Coins


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int result = 0;
	    int n, x;
	    cin >> n >> x;
	    int i = n;
	    while (i > 0) {
	        if (i > n - x) result += pow(2, i);
	        else result -= pow(2, i);
	        i--;
	    }
	    cout << result << endl;
	}
}
