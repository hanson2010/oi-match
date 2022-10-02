#include <cstdio>

using namespace std;

int a;

int main() {
    double ans = 0;
    
    scanf("%d", &a);
    if (a >= 400) ans += (a - 400) * 0.5663, a = 400;
    if (a >= 150) ans += (a - 150) * 0.4663, a = 150;
    ans += a * 0.4463;
    
    printf("%.1f", ans);
    
    return 0;
}
