// Link - https://www.codechef.com/problems/CAKEHALF
// Let me eat cake


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    int c = 0;
	    while (a != b) {
	        if (a > b) {
	            if (a % 2 == 1) c++;
	            c += (a / 2);
	            a = a / 2;
	        }
	        else {
	            if (b % 2 == 1) c++;
	            c += (b / 2);
	            b = b / 2;
	        }
	    }
	    cout << c << endl;
	}
}
