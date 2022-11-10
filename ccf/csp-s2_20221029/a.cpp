#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int N = 2510;

int n, m, k;
LL a[N], b[N];
vector<int> g1[N], g2[N];
int dist[N];

void add(vector<int> g[], int u, int v) {
    g[u].push_back(v), g[v].push_back(u);
}

void bfs1(int s) {
    queue<int> q;
    q.push(s);
    dist[1] = 0;
    for (int i = 2; i <= n; i ++ ) dist[i] = -1;
    while(q.size()) {
        int u = q.front(); q.pop();
        if (dist[u] == k) break;
        for (auto v : g1[u])
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
                add(g2, u, v);
            }
    }
}

void bfs2(int s, LL& ans) {
    queue<int> q;
    q.push(s);
    dist[1] = 0;
    for (int i = 2; i <= n; i ++ ) dist[i] = -1;
    b[1] = a[1];
    while(q.size()) {
        int u = q.front(); q.pop();
        if (dist[u] == 5) break;
        for (auto v : g2[u]) {
            if (dist[u] == 4 && v == 1) {
                ans = max(ans, b[u]);
            }
            if (dist[v] == -1 || v == 1) {
                dist[v] = dist[u] + 1;
                q.push(v);
                b[v] = b[u] + a[v];
            }
        }
    }
}

int main() {
    cin >> n >> m >> k;
    k ++ ;
    for (int i = 2; i <= n; i ++ ) cin >> a[i];
    while (m -- ) {
        int u, v;
        cin >> u >> v;
        add(g1, u, v);
    }
    
    for (int i = 1; i <= n; i ++ ) bfs1(i);
    
    LL ans = 0;
    bfs2(1, ans);
    cout << ans << endl;
    
    return 0;   
}
