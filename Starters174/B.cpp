// https://www.codechef.com/problems/BIGNAME


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
        string result = "";
        
        bool flag = true;
        for (char ch : s) {
            if (ch != 'z') {
                flag = false;
            } 
            result += "z";
        }
        
        if (flag){
            cout << -1 << endl;
            continue;
        }
        
        cout << result << endl;
        
    }    
    return 0;
}s