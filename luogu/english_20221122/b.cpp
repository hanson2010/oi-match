#include <bits/stdc++.h>

using namespace std;

int main() {
    char sx, sy, tx, ty;
    scanf("%c", &sx);
    scanf("%c", &sy);
    scanf("%c", &tx);
    scanf("%c", &tx);
    scanf("%c", &ty);
    
    int x = abs(sx - tx);
    int y = abs(sy - ty);
    printf("%d\n", max(x, y));
    
    for (int i = 1; i <= max(x, y); i ++ ) {
        if (sx < tx) printf("R"), sx ++ ;
        else if (sx > tx) printf("L"), sx -- ;
        if (sy < ty) printf("U"), sy ++ ;
        else if (sy > ty) printf("D"), sy -- ;
        printf("\n");
    }
    
    return 0;   
}
