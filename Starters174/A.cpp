// https://www.codechef.com/problems/HWFIN


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y;
	cin >> x >> y;
	int total = x + (10 * y);
	if (total >= 100) {
	    cout << "YES" << endl;
	}
	else {
	    cout << "NO" << endl;
	}
}
