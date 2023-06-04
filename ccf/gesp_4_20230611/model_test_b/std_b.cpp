#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

typedef pair<int, int> PII;

int n;
int hf[30][30];

PII get_pos(PII p) {
    PII ret;
    ret.x = p.x - 1;
    if (ret.x < 1) ret.x = n;
    ret.y = p.y + 1;
    if (ret.y > n) ret.y = 1;
    if (hf[ret.x][ret.y]) {
        ret.x = p.x + 1;
        if (ret.x > n) ret.x = 1;
        ret.y = p.y;
    }
    return ret;    
}

int main() {
    cin >> n;
    PII p1 = {1, n / 2 + 1};
    hf[p1.x][p1.y] = 1;
    for (int i = 2; i <= n * n; i ++ ) {
        PII p2 = get_pos(p1);
        hf[p2.x][p2.y] = i;
        p1 = p2;
    }
    
    for (int i = 1; i <= n; i ++ ) {
        for (int j = 1; j <= n; j ++ )
            cout << hf[i][j] << ' ';
        puts("");
    }
    return 0;
}
