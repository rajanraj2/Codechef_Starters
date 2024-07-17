// Link - https://www.codechef.com/START143D/problems/MAXMINLEN
// Max Min and Length


#include <bits/stdc++.h>
using namespace std;

void helper(int i, vector<int>& temp, vector<int>& arr, int n, int &count, int current_max, int current_min) {
    if (i >= n) {
        if (!temp.empty() && (current_max - current_min == temp.size())) {
            count++;
        }
        return;
    }
    temp.push_back(arr[i]);
    int new_max = max(current_max, arr[i]);
    int new_min = min(current_min, arr[i]);
    helper(i + 1, temp, arr, n, count, new_max, new_min);
    temp.pop_back();
    helper(i + 1, temp, arr, n, count, current_max, current_min);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    vector<int> temp;
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    helper(0, temp, arr, n, count, INT_MIN, INT_MAX);
	    cout << count << endl;
	}
}
