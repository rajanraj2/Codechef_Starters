// Link - https://www.codechef.com/START141D/problems/REDUARRAY?tab=statement
// Redundant array


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    long long result = 0;
	    int mini = INT_MAX;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        mini = min(mini, arr[i]);
	    }
	   // int flag = 1;
	   // for (int i = 0; i < n - 1; i++) {
	   //     if (arr[i] != arr[i + 1]) {
	   //         flag = 0;
	   //     }
	   // }
	   // if (flag == 1) {
	   //     cout << 0 << endl;
    //         continue;
	   // }
	    
	   // long long total_cost = 0;
    //     for (int i = 0; i < n; i++) {
    //         total_cost += (arr[i] - mini);
    //     }
	   // for (int i = 0; i < n - 1; i++) {
	   //     if (arr[i] != mini) {
	   //         if (arr[i + 1] != mini) {
	   //             arr[i] = mini;
	   //             arr[i + 1] = mini;
	   //             int cost = 2 * mini;
	   //             result += cost;
	   //         }
	   //         else {
	   //             result += mini;
	   //         }
	   //     }
	   // }
	   // if (arr[n - 1] != mini) {
	   //     result += mini;
	   // }
	   for (int i = 0; i < n; i++) {
	       if (arr[i] != mini) {
	           result += (long long)mini;
	       }
	   }
	   
	    cout << result << endl;
	}
}
