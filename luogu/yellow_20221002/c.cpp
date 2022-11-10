#include <cstdio>

using namespace std;

float a;

int main() {
    scanf("%f", &a);
    float s = 2.0, l = 2.0;
    int ans = 1;
    for (int i = 2; ; i ++ ) {
        l *= 0.98;
        s += l;
        if (s >= a) { ans = i; break; }
    }
    
    printf("%d", ans);
    return 0;
}
