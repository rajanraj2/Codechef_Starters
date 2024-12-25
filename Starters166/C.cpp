// https://www.codechef.com/START166C/problems/DPOWER
// Distinct Power


#include <bits/stdc++.h>
using namespace std;

void helper(const vector<pair<int, int>>& vec, vector<int>& ans) {
    int i = 1;
    for (auto it : vec) {
        ans[it.second] = i++;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    vector<pair<int, int>> vec(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        vec[i] = {arr[i], i};
	    }
	    sort(vec.rbegin(), vec.rend());
	    
	    vector<int> ans(n);
	    helper(vec, ans);
	    
	    int i = 0, count = 0;
	    while (i < n) {
            if (i + 1 < n && ans[i] + 1 == ans[i + 1]) {
                while (i + 1 < n && ans[i] + 1 == ans[i + 1]) i++;
                count++;
            } 
            else if (i + 1 < n && ans[i] - 1 == ans[i + 1]) {
                while (i + 1 < n && ans[i] - 1 == ans[i + 1]) i++;
                count++;
            } 
            else {
                count++;
            }
            i++;
        }
        cout << count << endl;
        
	    
	    
	}
}
