// https://www.codechef.com/problems/MINOVER


#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> arr) {
    int val = 0;
    string str = "";
    int end = arr.size();
    for (int i = 0; i < end; i++) {
        str += to_string(arr[i]);
    }
    val = stoi(str);
    return val;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        
        int mini = *min_element(b.begin(), b.end());
        int ind = -1;
        for (int i = 0; i < m; i++) {
            if (b[i] == mini) {
                ind = i;
                break;
            }
        }
        
        
        vector<int> vec;
        vec.reserve(m)
        for (int i = ind; i < ind + m; i++) {
            int index = ind % m;
            vec.push_back(b[index]);
        }
        
        
        
    }    
    return 0;
}