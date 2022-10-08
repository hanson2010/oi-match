#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 2e4 + 10;
const int INF = 0x3f3f3f3f;

int p[N], size[N], cluster[N];
// f[j]表示不超过j名学霸的所有方案能选出的最多学霸人数
// f[j]表示总体积不超过j的所有方案能实现的最大总价值
int f[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void merge(int a, int b) {
    int af = find(a), bf = find(b);
    if (af == bf) return;
    p[bf] = af;
    size[af] += size[bf];
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    // 如果没有这一行，Case #1 TLE
    if (k == 0) { cout << m << endl; return 0; }
    
    for (int i = 1; i <= n; i ++ ) {
        p[i] = i;
        size[i] = 1;
    }
    int a, b;
    for (int i = 1; i <= k; i ++ ) {
        cin >> a >> b;
        merge(a, b);
    }
    
    int cnt = 0;
    for (int i = 1; i <= n; i ++ ) {
        if (i == p[i]) {
            cluster[ ++ cnt] = size[i];
        }
    }
    // 按01背包处理
    for (int i = 1; i <= cnt; i ++ )
        for (int j = n; j >= cluster[i]; j -- )
            f[j] = max(f[j], f[j - cluster[i]] + cluster[i]);
    
    int min_size = INF, ans = INF;
    for (int i = 0; i <= n; i ++ )
        if (min_size > abs(f[i] - m)) {
            min_size = abs(f[i] - m);
            ans = f[i];
        }
    if (ans == INF) cout << 0 << endl;
    else cout << ans << endl;
    
    return 0;
}
