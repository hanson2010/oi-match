#include <bits/stdc++.h>

using namespace std;

const int N = 30;

int a, n, m, x, on;
int A[N], B[N];
int ans;

int main() {
    cin >> a >> n >> m >> x;
    
    A[1] = A[2] = 1;
    A[3] = 2;
    B[1] = B[2] = B[3] = 0;
    for(int i = 4; i <= n - 1; i ++ ) {
        A[i] = A[i - 2] + A[i - 1] - 1;
        B[i] = B[i - 2] + B[i - 1] + 1;
    }
    if (n <= 4)
        on = 0;
    else
        on = (m - A[n - 1] * a) / B[n - 1];
    ans = A[x] * a + B[x] * on;
    cout << ans << endl;

    return 0;
}
