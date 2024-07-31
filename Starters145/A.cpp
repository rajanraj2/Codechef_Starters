// Link - https://www.codechef.com/START145D/problems/CABLE
// Volume comparison


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	if (a * b * c > x * x * x) {
	    cout << "Cuboid\n";
	}
	else if (a * b * c < x * x * x) {
	    cout << "Cube\n";
	}
	else {
	    cout << "Equal\n";
	}
}
