#include <bits/stdc++.h>

using namespace std;

const int N = 55;

int n, m;
int a[N][N];
// f[i, x1, x2]表示第一个人走到[x1, i + 2 - x1]，
//                第二个人走到[x2, i + 2 - x2]
// 处时取到的最大值
int f[N * 2][N][N];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++ )
        for (int j = 1; j <= m; j ++ )
            scanf("%d", &a[i][j]);

    f[0][1][1] = a[1][1];
    for (int i = 0; i <= n + m - 2; i ++ )
        for (int x1 = max(1, i - m); x1 <= n && x1 < i; x1 ++ )
            for (int x2 = max(1, i - m); x2 <= n && x2 < i; x2 ++ ) {
                // 两个人不能走到同一格，除非在开始和结束时
                if (x1 != x2 || i == 0 || i == n + m - 2) {
                    // 都向右
                    f[i][x1][x2] = max(f[i][x1][x2], 
                                       f[i - 1][x1][x2] + 
                                       a[x1][i + 2 - x1 + 1] +
                                       a[x2][i + 2 - x2 + 1]);
                    // 只第一人向右
                    f[i][x1][x2] = max(f[i][x1][x2], 
                                       f[i - 1][x1][x2] + 
                                       a[x1][i + 2 - x1 + 1] +
                                       a[x2][i + 2 - x2]);
                    // 只第一人向右
                    f[i][x1][x2] = max(f[i][x1][x2], 
                                       f[i - 1][x1][x2] + 
                                       a[x1][i + 2 - x1] +
                                       a[x2][i + 2 - x2 + 1]);
                    // 都向下
                    f[i][x1][x2] = max(f[i][x1][x2], 
                                       f[i - 1][x1][x2] + 
                                       a[x1][i + 2 - x1] +
                                       a[x2][i + 2 - x2]);
                }
            }

    printf("%d\n", f[n + m - 2][n][n]);

    return 0;
}
