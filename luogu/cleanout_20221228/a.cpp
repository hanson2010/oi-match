#include <bits/stdc++.h>

using namespace std;

const int N = 2e9 + 10;

bool light[N];

int main() {
    int n;
    scanf("%d", &n);

    while (n -- ) {
        double a;
        int t;
        scanf("%lf%d", &a, &t);
        
        for (int i = 1; i <= t; i ++ ) {
            int x = a * i;
            light[x] ^= 1;
        } 
    }
    
    for (int i = 1; i < N; i ++ ) {
        if (light[i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    
    return 0;
}
