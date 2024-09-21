// Problem: B. Robin Hood and the Major Oak
// Contest: Codeforces Round 974 (Div. 3)
// URL: https://codeforces.com/contest/2014/problem/B
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

int is_odd(int a) {
    return a & 1;
}

int main() {
    cin >> T;
    while (T -- ) {
        cin >> n >> k;
        
        if (is_odd(n))
            if (is_odd((k + 1) / 2))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        if (not is_odd(n))
            if (k == 1)
                cout << "YES" << endl;
            else if (is_odd(k / 2))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
    }
    
    return 0;
}
