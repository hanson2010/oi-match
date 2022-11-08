#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
 
int n;
int a, b, w;
char s[710];

int main() {
    cin >> n;
    cin >> s;
    memcpy(s + n, s, n);
    
    int ans = 0;
    char c = 'x';
    for(int i = 0; i < n << 1; i ++ ) {
        if (s[i] == 'w') {
            b ++ , w ++ ;
        } else if (s[i] == c) {
            b ++ , w = 0;
        } else {
            ans = max(ans, a + b);
            a = b - w;
            b = w + 1;
            w = 0;
            c = s[i];
        }
        if (a + b >= n) break;
    }
    
    ans = max(ans, a + b);
    cout << ans << endl;
    //printf("%d\n",min(ans,n));
    return 0;
}
