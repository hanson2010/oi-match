#include <cstdio>

using namespace std;

int a, b, c, d;

int main() {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int x = (c - a) * 60 + d - b;
        
    printf("%d %d", x / 60, x % 60);
    return 0;
}
