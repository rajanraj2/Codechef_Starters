// https://www.codechef.com/problems/P3169
// Make k Most Frequent


#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> arr, int k) {
    vector<int> freq(21, 0);
    int ans = 2;
    
    for (int &it : arr) {
        freq[it]++;
        if (freq[k] >= *max_element(freq.begin(), freq.end())) ans = 1;
    }
    
    if (freq[k] >= *max_element(freq.begin(), freq.end())) ans = 0;
    return ans;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    int result = min(helper(arr, k), helper(vector<int> (arr.rbegin(), arr.rend()), k));
	    cout << result << endl;
	}
}





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         int result = 2;
//         vector<int> arr(n), vec;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             if (arr[i] == k) vec.push_back(i);
//         }
//         bool flag = false;
//         int m = vec.size();
        
        
//         for (int i = 0; i < m; i++) {
//             if (flag) break;
//             for (int j = i; j < m; j++) {
//                 if (flag) break;
//                 map<int, int> mpp;
//                 int maxi = 0, count = j - i;
//                 count++;
//                 for (int x = vec[i]; x <= vec[j]; x++) {
//                     if (arr[x] != k) {
//                         mpp[arr[x]]++;
//                         maxi = max(maxi, mpp[arr[x]]);
//                     }
//                     else {
//                         count++;
//                     }
//                 }
//                 if (count > 0 && count >= maxi) {
//                     int pre = 0;
//                     if (i > 0) pre = 1;
//                     int suf = 0;
//                     if (j < n - 1) suf = 1;
//                     int all = pre + suf;
//                     result = min(result, all);
//                     if (result == 0) flag = true; 
//                 }
//             }
//         }
//         cout << result << endl;
//     }    
//     return 0;
// }