// Link - https://www.codechef.com/START149D/problems/P1149


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y, k;
	cin >> x >> y >> k;
	if (abs(x - y) <= k) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
