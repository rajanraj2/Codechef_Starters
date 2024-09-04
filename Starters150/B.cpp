#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    int result = 0;
	    int a = 2 * x;
	    int b = 2 * y;
	    if (2 * x <= y || x >= 2 * y) result = 0;
	    else if (a - y <= b - x) {
	        while (2 * x > y) {
	            x--;
	            result++;
	        }
	    }
	    else {
	        while (x < 2 * y) {
	            y--;
	            result++;
	        }
	    }
	    cout << result << endl;
	    
	}

}
