// https://www.codechef.com/START171C/problems/VOLCANO


#include <bits/stdc++.h>
using namespace std;

vector<int> nge(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, 0);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        int current = arr[i];

        while (!st.empty() && (st.top() <= current || st.top() == 0)) {
            st.pop();
        }

        result[i] = (current == 0) ? 0 : (st.empty() ? current : st.top());

        st.push(current);
    }

    return result;
}


int helper(vector<int>& height, int p, vector<int> &result) {
    int n = height.size();
    long long total = 0;
    int lMax = 0, rMax = 0, left = 0, right = n - 1;

    while (left < right) {

        
        
        if (height[left] <= height[right]) {
            // if (lMax > height[left]) {
            //     total += lMax - height[left];
            // }
            // else {
            //     lMax = height[left];
            // }
            lMax = max(lMax, height[left]);
            if (height[left] != 0) result[left] = ceil(lMax / (double)p);
            left++;
        }
        else {
            // if (rMax > height[right]) {
            //     total += rMax - height[right];
            // }
            // else {
            //     rMax = height[right];
            // }
            rMax = max(rMax, height[right]);
            // cout << "Rmax : " << rMax << endl;
            if (height[right] != 0) result[right] = ceil(rMax / (double)p);
            right--;
        }
    }
    return int(total);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> arr(n), result(n, 0), ans1(n), ans2(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> rev = arr;
        reverse(rev.begin(), rev.end());
        
        ans1 = nge(arr);
        ans2 = nge(rev);
        findNGEUntilZero
        // helper(arr, p, result);
        for (int i = 0; i < n; i++) {
            int val = min(ans1[i], ans2[i]);
            int value = ceil(val / (double)p);
            cout << val << " ";
            // cout << value << " ";
        }
        cout << endl;
        
    }    
    return 0;
}