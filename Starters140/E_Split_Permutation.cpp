// Link - https://www.codechef.com/START140D/problems/SPLITPERM

#include <bits/stdc++.h>
using namespace std;

void generatePermutation(int N) {
    vector<int> permutation(N);
    int start = 1, end = N;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            permutation[i] = end;
            end--;
        } else {
            permutation[i] = start;
            start++;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        generatePermutation(N);
    }
    return 0;
}






// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 	    int n;
// 	    cin >> n;
// 	    vector<int> arr(n);
	    
// 	    if (n % 2 == 0) {
//     	    for (int i = 0; i < n; i++) {
//     	        if (i % 2 == 1) {
//     	            arr[i] = n - i + 1;
//     	        }
//     	        else {
//     	            arr[i] = i + 1;
//     	        }
//     	    }
// 	    }
// 	    else {
// 	        for (int i = 0; i < n; i++) {
// 	            arr[i] = i + 1;
// 	        }
// 	    }
	    
// 	    for (int i = 0; i < n; i++) {
// 	        cout << arr[i] << " ";
// 	    }
// 	    cout << endl;
// 	}
// }
