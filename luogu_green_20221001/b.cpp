#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 20010;

int n, m, k;
int p[N], size[N], cluster[N];
int cnt;

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

bool check(int x) {
    for (int i = 0; i < (1 << cnt); i ++ ) {
        int t = 0;
        for (int j = 0; j < cnt; j ++ )
            if ((i >> j & 1) == 1)
                t += cluster[j];
        if (t == x) return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i ++ ) {
        p[i] = i;
        size[i] = 1;
    }
    for (int i = 1; i <= k; i ++ ) {
        int a, b;
        cin >> a >> b;
        if (find(a) != find(b)) {
            p[find(b)] = find(a);
            size[find(a)] += size[find(b)];
        }
    }
    for (int i = 1; i <= n; i ++ ) {
        if (i == find(i)) {
            cluster[cnt ++ ] = size[i];
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= m; i ++ ) {
        for (int j = -1; j <= 2; j = j + 2) {
            ans = m + i * j;
            if (check(ans)) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    
    return 0;
}
