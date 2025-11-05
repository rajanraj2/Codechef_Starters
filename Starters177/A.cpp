// http://codechef.com/problems/TRICHECK


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

bool isTriangle(int x, int y, int z) {
    if (x + y > z && y + z > x && z + x > y) return true;
    return false;
}

int32_t main() {
    fio;
    int x, y, z;
    cin >> x >> y >> z;
    string result = "NO";
    if (isTriangle(x, y, z)) result = "YES";
    cout << result << "\n";
    return 0;
}   