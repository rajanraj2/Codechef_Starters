// Link - https://www.codechef.com/START142D/problems/CHEFIZZA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int x;
	    cin >> x;
	    if (x <= 2) {
	        cout << 0 << endl;
	        continue;
	    }
	    int power = log2(x);
	    int step = (x - pow(2, power)) / 2;
	    cout << step * 4 << endl;
	}
}
