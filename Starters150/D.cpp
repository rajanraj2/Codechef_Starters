#include <bits/stdc++.h>
using namespace std;

int pairs(int x) {
    int ans = x * (x - 1) / 2;
    return ans;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    map<int, int> mpp;
	    int el = 1, maxi = 0, result = 0, countZero = 0;
	
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i] == 0) countZero++;
	        
	        else {
	            mpp[arr[i]]++;
	            if (mpp[arr[i]] > maxi) {
	                maxi = mpp[arr[i]];
	                el = arr[i];
	            }
	        }
	    }
	    
	    if (countZero == n) result = pairs(n);
	    else {
	        bool check = false;
	        for (auto it : mpp) {
	            if (it.second > 1) {
	                check = true;
	                break;
	            }
	        }
	        
	        if (check) {
	            mpp[el] += countZero;
	            for (auto it : mpp) {
	                if (it.second > 1) {
	                    result += pairs(it.second);
	                }
	            }
	        }
	        else {
	            result = pairs(countZero + 1);
	        }
	    }
	    
	    cout << result << endl;
	    
 	}
}
