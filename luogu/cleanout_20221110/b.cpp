#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 10;

int n;
int a[N], b[N], g[N], k[N];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i ++ )
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    int x, y;
    cin >> x >> y;
    
    for (int i = n; i >= 1; i -- ) {
        if (x >= a[i] &&
            y >= b[i] &&
            x <= a[i] + g[i] &&
            y <= b[i] + k[i]) {
            cout << i << endl;
            return 0;
        }
    }
    
    puts("-1");
    return 0;   
}
