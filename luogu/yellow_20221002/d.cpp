#include <cstdio>

using namespace std;

int x, n;

int main() {
    scanf("%d %d", &x, &n);
    
    int nn = n % 7;
    int ans = (n / 7) * 1250;
    int j = 1;    
    for (int i = x; ; i ++ ) {
        if (j ++ > nn) break;
        if (i != 6 && i != 7) ans += 250;
        if (i == 8) i = 1;
    }
    
    printf("%d", ans);
    return 0;
}
