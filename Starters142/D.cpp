// Link - https://www.codechef.com/START142D/problems/ARRREM

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwoMinusOne(int x) {
    return (x & (x + 1)) == 0;
}

int minRemovals(vector<int>& arr) {
    int n = arr.size();
    
    // Compute the full OR of the array
    int full_or = 0;
    for (int num : arr) {
        full_or |= num;
    }
    
    // If the full OR itself is of the form 2^x - 1
    if (isPowerOfTwoMinusOne(full_or)) {
        return 0;
    }
    
    // Track all valid OR results
    unordered_set<int> valid_or;
    
    // Iterate over all subsets using bitmasking
    for (int i = 0; i < (1 << n); ++i) {
        int current_or = 0;
        int removed = 0;
        
        // Calculate OR and count removed elements
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                current_or |= arr[j];
            } else {
                ++removed;
            }
        }
        
        // Check if current_or matches 2^x - 1
        if (isPowerOfTwoMinusOne(current_or)) {
            valid_or.insert(i); // Store the bitmask of valid subset
        }
    }
    
    // Find the minimum removals needed
    int min_removals = n;
    for (int subset : valid_or) {
        min_removals = min(min_removals, n - __builtin_popcount(subset));
    }
    
    return min_removals;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << minRemovals(A) << endl;
    }
    return 0;
}
