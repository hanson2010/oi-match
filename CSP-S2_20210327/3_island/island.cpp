#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    freopen("island.in", "r", stdin);
    freopen("island.out", "w", stdout);
    int n, q;
    scanf("%d %d", &n, &q);
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
        scanf("%d %d", &a[i], &b[i]);
    int l, r, c, d;
    int aa, bb, count;
    for(int j = 0; j < q; j++) {
        scanf("%d %d %d %d", &l, &r, &c, &d);
        count = 0;
        for(int k=l; k<=r; k++) {
            aa = a[k];
            bb = b[k];
            if((aa ^ c) <= min(bb, d))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
