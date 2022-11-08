#include <bits/stdc++.h>

using namespace std;

const int N = 30;

int bx, by, hx, hy;
int st[N][N];
long long f[N][N];

int main() {
    cin >> by >> bx >> hy >> hx;
    by += 2, bx += 2, hy += 2, hx += 2;
    
    st[hy][hx] = 1;
    st[hy + 2][hx + 1] = 1;
    st[hy + 1][hx + 2] = 1;
    st[hy - 1][hx + 2] = 1;
    st[hy - 2][hx + 1] = 1;
    st[hy - 2][hx - 1] = 1;
    st[hy - 1][hx - 2] = 1;
    st[hy + 1][hx - 2] = 1;
    st[hy + 2][hx - 1] = 1;
    f[1][2] = 1;
    for (int i = 2; i <= by; i ++ ) {
        for (int j = 2; j <= bx; j ++ ) {
            if (st[i][j]) f[i][j] = 0;
            else f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    
    cout << f[by][bx] << endl;
    
    return 0;   
}
