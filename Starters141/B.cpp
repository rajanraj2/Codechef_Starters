// Link - https://www.codechef.com/START141D/problems/SAMESAME
// Nearly equal


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string A, B;
        cin >> A;
        cin >> B;

        int result = INT_MAX;

        for (int i = 0; i <= n - m; i++) {
            int diff = 0;
            for (int j = 0; j < m; j++) {
                if (A[i + j] != B[j]) {
                    diff++;
                }
            }
            result = min(result, diff);
        }

        cout << result << endl;
    }
    return 0;
}
