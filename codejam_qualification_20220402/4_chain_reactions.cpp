#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

int f[N];
int p[N];
bool initiator[N], st[N];

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++ ) {
        memset(initiator, 1, sizeof initiator);
        memset(st, 0, sizeof st);
        
        int n;
        cin >> n;
        for (int j = 1; j <= n; j ++ ) 
            cin >> f[j];
        for (int j = 1; j <= n; j ++ ) {
            int pp;
            cin >> pp;
            p[j] = pp;
            if (pp) initiator[pp] = 0;
        }
        
        LL ans = 0;
        for (int j = 1; j <= n; j ++ ) {
            if (!initiator[j]) continue;
            st[j] = true;
            int temp = f[j];
            int next = p[j];
            while (next && !st[next]) {
                st[next] = true;
                temp = max(temp, f[next]);
                next = p[next];
            }
            ans += temp;
        }
        cout << "Case #" << i << ": " << ans << endl;
    }
    
    return 0;
}