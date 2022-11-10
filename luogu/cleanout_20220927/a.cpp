#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
 
const int N = 30, M = 410;

int n, m;
int a[M], b[M];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i ++ ) {
        cin >> a[i] >> b[i];
    }
    
    int ans = 0;
    // 位运算
    for (int i = 0; i < (1 << n); i ++ ) {
        bool flag = 1;
        for (int j = 0; j < m; j ++ )
            if ((i & (1 << (a[j] - 1))) &&
                (i & (1 << (b[j] - 1)))) {
                    flag = 0;
                    break;
                }
        if (flag) ans ++ ;
    }
    
    cout << ans << endl;
    return 0;
}
