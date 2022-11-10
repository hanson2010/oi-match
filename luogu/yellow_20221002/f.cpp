#include <cstdio>

using namespace std;

float s, x;

int main() {
    scanf("%f %f", &s, &x);
    float l = s - x, r = s + x;
    
    float l1 = 0.0, r1 = 0.0, las = 7.0;
    bool flag1, flag2;
    if (r1 > r || r1 < l) flag2 = false; else flag2 = true;
    bool ans = false;
    for (int i = 1; ; i ++ ) {
        l1 = r1, r1 += las;
        //printf("%.1f %.1f\n", l1, r1);
        flag1 = flag2;
        if (r1 > r || r1 < l) flag2 = false; else flag2 = true;
        if (flag1 && flag2) { ans = true; break; }
        if (r1 > r) { break; }
        las *= 0.98;
    }
    
    if (ans) printf("y"); else printf("n");
    return 0;
}
