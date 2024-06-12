// Link - https://www.codechef.com/problems/LONGDRIVE
// Long Drive


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        int z = y - x;
        z *= 10;
        if ((z + y) <= 100) cout << 1;
        else if ((z + y) > 100){
            int time = (z + 100 - y - 1) / (100 - y);
            cout << time;
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
}
