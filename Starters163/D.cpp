// https://www.codechef.com/problems/SORT_THEM?tab=ide
// Sort them


#include <bits/stdc++.h>
using namespace std;

auto helper(int index, int last, int& n, string& s, string& p, vector<vector<int>>& dp, vector<int>& arr) {
    if (index == n) return 0;
    if (dp[index][last] != -1) return dp[index][last];
    
    int first = n + 1, second = n + 1;
    
    if (s[index] - 'a' >= last) first = helper(index + 1, s[index] - 'a', n, s, p, dp, arr);
    int ind = p[25 - arr[s[index] - 'a']] - 'a';
    if (ind >= last) second = 1 + helper(index + 1, ind, n, s, p, dp, arr);
    
    return dp[index][last] = min(first, second);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    string s, p;
	    cin >> n >> s >> p;
	    int ans = -1;
	    
	    vector<int> arr(26);
	    for (int i = 0; i < 26; i++) arr[p[i] - 'a'] = i;
	    
	    vector<vector<int>> dp(n, vector<int> (26, -1));
	    int result = helper(0, 0, n, s, p, dp, arr);
	    if (result <= n) ans = result;
	    
	    cout << ans << endl;
	}
}




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string s, t;
// 	    cin>>s>>t;
// 	    int ord[26];
// 	    for(int i = 0; i < 26; i++){
// 	        ord[t[i] - 'a'] = i;
// 	    }
// 	    int dp[n][2];
// 	    dp[0][0] = 0;
// 	    dp[0][1] = 1;
// 	    for(int i = 1; i < n; i++){
// 	        dp[i][0] = n + 1;
// 	        dp[i][1] = n + 1;
// 	        if(s[i] >= s[i - 1]){
// 	            dp[i][0] = dp[i - 1][0];
// 	        }
// 	        if(s[i] >= t[26 - ord[s[i - 1] - 'a'] - 1]){
// 	            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
// 	        }
// 	        if(t[26 - ord[s[i] - 'a'] - 1] >= s[i - 1]){
// 	            dp[i][1] = dp[i - 1][0] + 1;
// 	        }
// 	        if(t[26 - ord[s[i] - 'a'] - 1] >= t[26 - ord[s[i - 1] - 'a'] - 1]){
// 	            dp[i][1] = min(dp[i][1], dp[i - 1][1] + 1);
// 	        }
// 	    }
// 	    int ans = min(dp[n - 1][0], dp[n - 1][1]);
// 	    if(ans > n){
// 	        ans = -1;
// 	    }
// 	    cout<<ans<<"\n";
// 	}
// }

// keep s[i] same:
// same, same
// change, same

// Change s[i]:
// same, change
// change, change