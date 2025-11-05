// https://www.codechef.com/problems/P4_172


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        int i = a.size() - 1, j = b.size() - 1;
        vector<int> vec;
      
        while (j >= 0 && i >= 0) {
            if (a[i] == b[j]) {
                vec.push_back(i + 1);
                j--;
            }
            i--;
        }
        
        if (j >= 0) {
            cout << -1 << endl;
            continue;
        }
        
        long long result = 0;
        int end = a.size(), count = 0, len = b.size() + 1;
        for (int k = 0; k < vec.size(); k++) {
            long long val = (end - vec[k]) * (len - count);
            result += val;
            end = vec[k] - 1;
            count++;
        }
        result += (long long)end;
        cout << result << endl;
        
    }    
    return 0;
}