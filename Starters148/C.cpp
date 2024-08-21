// Link - https://www.codechef.com/problems/FIGBOT
// FightBots


#include <bits/stdc++.h>
using namespace std;

void helper(int& a, int& b, int c, int d, int step, string& result) {
    int distance = abs(a - c);
    distance += abs(b - d);
    
    if (distance <= step && (step - distance) % 2 == 0) {
        result = "Yes";
    }
    
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, x, y;
	    cin >> n >> x >> y;
	    string s;
	    cin >> s;
	    int a = 0, b = 0;
	    string result = "No";
	    
	    for (int i = 0; i < n; i++) {
	        if (result == "Yes") break;
	        helper(a, b, x, y, i + 1, result);
	        if (s[i] == 'L') a--;
	        else if (s[i] == 'R') a++;
	        else if (s[i] == 'D') b--;
	        else if (s[i] == 'U') b++;
	    }
	    
	    cout << result << endl;
	}
}




// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, X, Y;
//         cin >> N >> X >> Y;
//         string S;
//         cin >> S;

//         int left = 0, right = 0, up = 0, down = 0;
        
//         for (char move : S) {
//             if (move == 'L') left++;
//             else if (move == 'R') right++;
//             else if (move == 'U') up++;
//             else if (move == 'D') down++;
//         }

//         int finalX = right - left; 
//         int finalY = up - down;  

//         int distanceX = abs(X - finalX);
//         int distanceY = abs(Y - finalY);

//         int totalDistance = distanceX + distanceY;

//         if (totalDistance <= N && (N - totalDistance) % 2 == 0) {
//             cout << "Yes" << endl; 
//         } else {
//             cout << "No" << endl; 
//         }
//     }

//     return 0;
// }
