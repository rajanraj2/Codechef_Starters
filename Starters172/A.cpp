// https://www.codechef.com/problems/SMLPAL


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        string result = "";
        for (int i = 0; i < x / 2; i++) {
            result += "1";
        }
        for (int i = 0; i < y; i++) {
            result += "2";
        }
        for (int i = 0; i < x / 2; i++) {
            result += "1";
        }
        int ans = stoi(result);
        cout << ans << endl;
        
    }    
    return 0;
}