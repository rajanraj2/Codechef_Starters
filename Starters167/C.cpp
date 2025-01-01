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
