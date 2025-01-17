// https://www.codechef.com/problems/P5169
// Constant Subsequence


#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int> &pos, vector<int> &neg, long long mid) {
    long long maxi = 0;
    int i = 0;
    for (int &it : pos) {
        maxi += it;
        while (i < neg.size()) {
            if (maxi > mid) {
                maxi = max((long long)it, maxi + neg[i]);
                i++;
            }
            else break;
        }
        if (maxi > mid) return false;
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    vector<int> pos, neg;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i] >= 0) pos.push_back(arr[i]);
	        else neg.push_back(arr[i]);
	    }
	    
	    if (pos.size() == 0) {
	        cout << 0 << endl;
	        continue;
	    }
	    
	    long long left = *max_element(pos.begin(), pos.end());
	    long long right = accumulate(pos.begin(), pos.end(), 0LL);
	    long long result = 0;
	    if (neg.empty()) {
	        cout << right << endl;
	        continue;
	    }
	    
	    while (left <= right) {
	        long long mid = left + (right - left) / 2;
	        if (helper(pos, neg, mid)) {
	            result = mid;
	            right = mid - 1;
	        }
	        else left = mid + 1;
	    }
	    cout << result << endl;
	}
}
