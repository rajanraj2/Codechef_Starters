// Link - https://www.codechef.com/problems/CHOLY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y, z;
	cin >> x >> y >> z;
	double a = x;
	double b = z;
	a = a + y * (1/2);
	b = b + y * (1/2);
	int games = x + y + z;
	bool result = false;
	if (games >= 4) {
	    if (a > b) result = true;
	}
	int rem = 4 - games;
	if (a + rem > b) cout << "YES" << endl;
	else cout << "NO" << endl;
	
}
