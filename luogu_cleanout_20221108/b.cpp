#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

int n;
int a[N];
bitset<N> b;

int main() {
    cin >> n;
    b.set(0);
    for (int i = n; i < N; i ++ ) b.set(i);

    for (int i = 0; i < n; i ++ ) {
        cin >> a[i];
        if (i > 0) {
            int d = abs(a[i] - a[i - 1]);
            if (d >= n) break;
            else b.set(d);
        }
    }
    if (b.all()) puts("Jolly");
    else puts("Not jolly");
    
    return 0;   
}
