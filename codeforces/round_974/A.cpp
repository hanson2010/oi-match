// Problem: A. Robin Helps
// Contest: Codeforces Round 974 (Div. 3)
// URL: https://codeforces.com/contest/2014/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int T;
int n, k;
int a;

int main() {
    cin >> T;
    while (T -- ) {
        cin >> n >> k;
        
        int ans = 0;
        int gold = 0;
        for (int i = 1; i <= n; i ++ ) {
            cin >> a;
            if (a >= k) gold += a;
            if (a == 0 and gold > 0) gold -= 1, ans ++ ;
        }
        cout << ans << endl;
    }
    
    return 0;
}
