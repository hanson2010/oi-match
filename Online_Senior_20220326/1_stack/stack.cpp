#include <cstring>
#include <cstdio>
#include <stack>

using namespace std;

const int N = 5e5 + 10;

int a[N], b[N];
int depth[N];

stack<int> sa, sb;

int get_depth(int x, int y) {
    while (!sa.empty()) {
        int ta = sa.top();
        int tb = sb.top();
        if (x != ta && y < tb) break;
        sa.pop(), sb.pop();
    }
    sa.push(x), sb.push(y);
    return sa.size();
}
    
int main() {
    freopen("stack.in", "r", stdin);
    freopen("stack.out", "w", stdout);
    
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i ++ )
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i ++ )
        scanf("%d", &b[i]);
    
    depth[1] = 1;
    sa.push(a[1]), sb.push(b[1]);
    for (int i = 2; i <= n; i ++ ) {
        depth[i] = get_depth(a[i], b[i]);
    }
        
    int l, r;
    while (q -- ) {
        scanf("%d%d", &l, &r);

        int ans = 0;
        for (int k = l; k <= r; k ++ ) {
            if (depth[k] == 1)
                ans ++ ;
        }
        // special case when a[l], b[l] is at stack bottom
        if (depth[l] > 1) {
            ans ++ ;
            int prev = depth[l];
            for (int k = l + 1; k <= r; k ++ ) {
                if (depth[k] <= prev) {
                    ans ++ ;
                    prev = depth[k];
                } else {
                    break;
                }
            }
        }
        printf("%d\n", ans);
    }
    
    return 0;    
}
