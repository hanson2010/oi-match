#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int N = 2e5 + 10;

int n, k;
LL a[N], s[N];

int main() {
    int t;
    scanf("%d", &t);
    while (t -- ) {
        memset(a, 0, sizeof a);
        memset(s, 0, sizeof s);
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; i ++ ) {
            scanf("%lld", &a[i]);
            s[i] += a[i];
        }
        
        if (n <= k) {
            printf("0\n");
            continue;
        }
        int jump_after = -1;
        LL mx = 0;
        for (int i = n - k - 1; i >= 0; i -- ) {
            if (s[i + k] - s[i] > mx) {
                mx = s[i + k] - s[i];
                jump_after = i;
            }
        }
        printf("%d\n", jump_after);
        
        LL ans = s[jump_after];
        if (jump_after + k < n - 1)
            ans += (s[n - 1] - s[jump_after + k]) + (n - 1 - jump_after - k);
        printf("%lld\n", ans);
    }
        
    return 0;
}
