#include <bits/stdc++.h>

using namespace std;

const int N = 1e4;

int tmp1[N], tmp2[N], tmp3[N], ans[N];

void add(int a[], int b[], int c[]) {
    memset(c, 0, sizeof ans);
    for (int i = 0; i < N; i ++ ) {
        c[i] += a[i] + b[i];
        if (c[i] >= 10) {
            c[i + 1] += 1;
            c[i] -= 10;
        }
    }
}

void mul_short(int a[], int b, int c[]) {
    memset(c, 0, sizeof ans);
    for (int i = 0; i < N; i ++ ) {
        c[i] += a[i] * b;
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
}

void p(int a[]) {
    bool flag = false;
    for (int i = N - 1; i >= 0; i -- ) {
        if (a[i] > 0) flag = true;
        if (flag) printf("%d", a[i]);
    }
    puts("");
}

int main() {
    int n;
    scanf("%d", &n);

    tmp1[0] = 1;
    tmp3[0] = 1;
    for (int i = 1; i < n; i ++ ) {
        mul_short(tmp1, i + 1, tmp2);
        add(tmp3, tmp2, ans);
        memcpy(tmp1, tmp2, sizeof tmp2);
        memcpy(tmp3, ans, sizeof ans);
    }
    
    p(ans);
    
    return 0;
}
