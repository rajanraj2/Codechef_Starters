// Link - https://www.codechef.com/START144D/problems/TCG
// Capital Gain Tax


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y;
	cin >> x >> y;
	if (x > y) {
	    cout << "DECREASED\n";
	}
	else if (x < y) {
	    cout << "INCREASED\n";
	}
	else {
	    cout << "SAME\n";
	}
}
