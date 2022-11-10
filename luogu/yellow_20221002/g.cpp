#include <iostream>

using namespace std;

typedef long long LL;

LL a;

int main() {
    cin >> a;
    
    LL ans = 0;
    for (int i = 0; i < 16; i ++ ) {
        if ((a >> i & 1) == 1) ans += (1 << (i + 16));
    }
    for (int i = 0; i < 16; i ++ ) {
        if ((a >> (i + 16) & 1) == 1) ans += (1 << i);
    }
    
    cout << ans << endl;
    return 0;
}
