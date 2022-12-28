#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int main() {
    int l, r;
    scanf("%d%d", &l, &r);
    
    int ans = 0;
    for (int i = l; i <= r; i ++ ) {
        int x = i;
        while (x) {
            if (x % 10 == 2) ans ++ ;
            x = x / 10;
        }
    }
    printf("%d\n", ans);

    return 0;
}
