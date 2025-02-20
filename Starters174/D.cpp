// https://www.codechef.com/problems/MYSSLIME


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
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    if (n == 2) {
	        cout << abs(arr[0] - arr[1]) << endl;
	        continue;
	    }
	    
	    arr[1] = max(0, arr[1] - arr[0]);
	    arr[n - 2] = max(0, arr[n - 2] - arr[n - 1]);
	    int result = *max_element(arr.begin(), arr.end());
	    cout << result << endl;
	}
}


// Correct Solution of my version

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n), vec;
//         int maxi = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             maxi = max(maxi, arr[i]);
//         }
        
//         if (n == 1) {
//             cout << arr[0] << endl;
//             continue;
//         }
//         if (n == 2) {
//             cout << abs(arr[0] - arr[1]) << endl;
//             continue;
//         }
//         if (n == 3) {
//             if (arr[0] == maxi || arr[2] == maxi) {
//                 cout << maxi << endl;
//             }
//             else {
//                 int ans = arr[1] - arr[0] - arr[2];
//                 ans = max(ans, arr[0]);
//                 ans = max(ans, arr[2]);
//                 cout << ans << endl;
//             }
//             continue;
//         }
        
//         if (arr[0] == maxi || arr[n - 1] == maxi) {
//             cout << maxi << endl;
//             continue;
//         }
        
//         int result = 0;
//         for (int i = 0; i < n; i++) {
//             if (i == 1 || i == n - 2) {
//                 int val;
//                 if (i == 1) val = arr[0];
//                 else val = arr[n - 1];
//                 result = max(result, arr[i] - val);
//             }
//             else result = max(result, arr[i]);
//         }
        
//         cout << result << endl;
        
//     }    
//     return 0;
// }


// Wrong Solution of my version

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n), vec;
//         int maxi = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             maxi = max(maxi, arr[i]);
//         }
        
//         if (n == 1) {
//             cout << arr[0] << endl;
//             continue;
//         }
//         if (n == 2) {
//             cout << abs(arr[0] - arr[1]) << endl;
//             continue;
//         }
//         if (n == 3) {
//             if (arr[0] == maxi || arr[2] == maxi) {
//                 cout << maxi << endl;
//             }
//             else {
//                 int ans = arr[1] - arr[0] - arr[2];
//                 ans = max(ans, arr[0]);
//                 ans = max(ans, arr[2]);
//                 cout << ans << endl;
//             }
//             continue;
//         }
        
//         if (arr[0] == maxi || arr[n - 1] == maxi) {
//             cout << maxi << endl;
//             continue;
//         }
        
//         bool flag = false;
//         int result = 0, check = 0;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == maxi) {
//                 if (i == 1 || i == n - 2) {
//                     int val;
//                     if (i == 1) val = arr[0];
//                     else val = arr[n - 1];
//                     result = max(result, maxi - val);
//                 }
//                 else flag = true;
//             }
//         }
        
//         if (flag) {
//             cout << maxi << endl;
//         }
//         else {
//             cout << result << endl;
//         }
        
//     }    
//     return 0;
// }