// https://www.codechef.com/START167C/problems/LOTTERYTICK
// Lottery Tickets


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
	    
	    int chef = arr[0];
	    int ind = 0;
	    sort(arr.begin(), arr.end());
	    for (int i = 0; i < n; i++) {
	        if (arr[i] == chef) {
	            ind = i;
	            break;
	        }
	    } 
	    
	    int mini = 1, maxi = 1e6;
	    if (ind > 0) mini = (chef + arr[ind - 1]) / 2;
	    if (ind > 0 && (chef + arr[ind - 1]) % 2 == 1) mini++;
	    if (ind < n - 1) maxi = (chef + arr[ind + 1]) / 2;
	    
	    int result = maxi - mini + 1;
	    cout << result << endl;
	   
	}
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   // your code goes here
//   int t;
//   cin >> t;
//   while (t--) {
//       int n;
//       cin >> n;
//       vector<int> arr(n);
//       bool flag = true;
//       for (int i = 0; i < n; i++) {
//           cin >> arr[i];
//           if (flag && arr[i] == 1) flag = false;
//       }
//       int chef = arr[0];
//      // sort(arr.begin(), arr.end());
//       int mini = 1, maxi = 1e6;
//       for (int i = 0; i < n; i++) {
//           if (arr[i] == chef) {
//               if (i > 0) mini = arr[i - 1];
//               if (i < n - 1) maxi = arr[i + 1];
//               break;
//           }
//       }
      
//       int result = 1;
//       if (n == 1) {
//           cout << 1000000 << endl;
//           continue;
//       }
      
//       for (int it = 1; it <= 1e6; it++) {
//           bool check = true;
//           int diff = abs(chef - it);
          
//           for (int i = 1; i < n; i++) {
//               int d = abs(arr[i] )
//           }
//       }

      
      
      
//      // int maxi = 1e6, mini = 1;
//      // bool flag = false;
//      // for (int i = 1; i < n; i++) {
//      //     if (arr[i] == 1) flag = true;
//      //     if (arr[i] > chef) maxi = min(maxi, arr[i]);
//      //     if (arr[i] < chef) mini = max(mini, arr[i]);
//      // }
//      // int result = 1;
//       if (maxi == chef + 1) {
//           result += 0;
//       }
//       else if (maxi == 1e6) {
//           result += maxi - chef;
//          // cout << result << "@" << endl;
//       }
//       else {
//           result += (maxi - chef - 1) / 2;
//           if ((maxi - chef - 1) % 2 == 1) result++;
//          // cout << result << "@" << endl;
//       }
      
//       if (mini == chef - 1) {
//           result += 0;    
//       }
//       else if (mini == 1 && flag) {
//           result += chef - mini;
//          // cout << "flag" << endl;
//       }
//       else {
//           result += (chef - mini - 1) / 2;
//           if ((chef - mini - 1) % 2 == 1) result++;
//          // cout << result << "#" << endl;
//       }
//      // if (maxi == (chef + 1) && mini == (chef - 1)) result = 1;
//       cout << result << endl;
//   }
// }