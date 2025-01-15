// https://www.codechef.com/problems/P7169
// Substring Strategy


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool flag = false;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                flag = true;
                s[i] = '0';
            }
            else {
                if (flag) break;
            }
        }
        
        cout << s << endl;
    }    
    return 0;
}