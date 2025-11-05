// https://www.codechef.com/problems/WAPEN


#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    int result = x;
    result += y * 10;
    cout << result << endl;
 
    return 0;
}