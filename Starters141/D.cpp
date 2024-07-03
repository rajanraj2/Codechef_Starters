// Link - https://www.codechef.com/START141D/problems/WELLLEFT?tab=statement
// Amphibian Escape


#include <iostream>
using namespace std;

bool canEscape(int A, int B, int K, int H) {
    if (A >= H) return true;
    long long net_distance = A + (K - 1) * (A - B);
    return net_distance >= H;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, H;
        cin >> N >> K >> H;

        long long count = 0;

        for (int A = 1; A <= N; ++A) {
            if (A >= H) {
                count += N;
            } else {
                for (int B = 1; B <= N; ++B) {
                    if (canEscape(A, B, K, H)) {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
