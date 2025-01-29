// https://www.codechef.com/START171C/problems/WHITEWALL


#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    int times = 0, result = INT_MAX;
	    while (times < 6) {
	        int ans = 0;
	        char prev1, prev2, prev3;
	        
	        if (times == 0) {prev1 = 'R'; prev2 = 'G'; prev3 = 'B';}
	        else if (times == 1) {prev1 = 'R'; prev2 = 'B'; prev3 = 'G';}
	        else if (times == 2) {prev1 = 'B'; prev2 = 'G'; prev3 = 'R';}
	        else if (times == 3) {prev1 = 'B'; prev2 = 'R'; prev3 = 'G';}
	        else if (times == 4) {prev1 = 'G'; prev2 = 'R'; prev3 = 'B';}
	        else {prev1 = 'G'; prev2 = 'B'; prev3 = 'R';}
	        
    	    for (int i = 0; i < n; i++) {
    	        if (s[i] != prev1) ans++; 
    	        char temp = prev1;
    	        prev1 = prev2;
    	        prev2 = prev3;
    	        prev3 = temp;
    	    }
    	    result = min(result, ans);
    	    times++;
	    }
	    cout << result << endl;
	}
}
