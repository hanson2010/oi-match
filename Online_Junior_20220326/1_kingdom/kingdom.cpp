#include <cstring>
#include <cstdio>

using namespace std;

const int N = 1010;

int a[N][N];
    
int main() {
    freopen("kingdom.in", "r", stdin);
    freopen("kingdom.out", "w", stdout);
    
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i ++ )
        for (int j = 0; j < n; j ++ )
            scanf("%d", &a[i][j]);

    int ans = 0;    
    for (int j = 0; j < n; j ++ ) {
        int b;
        scanf("%d", &b);
        int x = 0;
        for (int i = 0; i < m; i ++ )
            if (a[i][j] == 1) x ++ ;
        int my = 0;
        if (2 * x > m) my = 1;
        if (b == my) ans ++ ;
    }
        
    printf("%d\n", ans);
    
    return 0;    
}
