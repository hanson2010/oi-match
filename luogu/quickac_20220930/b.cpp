#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 30010, M = 30;

int v[M], p[M];
int f[M][N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i ++ ) {
        cin >> v[i] >> p[i];
    }
    
    for (int i = 1; i <= m; i ++ ) {
        for (int j = v[i]; j <= n; j ++ )
            f[i][j] = max(f[i - 1][j], 
                      f[i - 1][j - v[i]] + v[i] * p[i]);
    }
    
    cout << f[m][n] << endl;
    return 0;
}
