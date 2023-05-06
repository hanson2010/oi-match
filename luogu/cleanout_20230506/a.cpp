#include <bits/stdc++.h>

using namespace std;

int n, d;
string s;

int main() {
    cin >> n >> d;
    cin >> s;
    s.insert(0, "0");
    if (s[1] == '0' || s[n] == '0') {
        cout << -1 << endl;
        return 0;
    }
        
    int cur = 1;
    int ans = 0;
    while (cur < n) {
        bool flag = false;
        for (int i = d; i > 0; i -- ) {
            if (cur + i >= n || s[cur + i] == '1') {
                cur = cur + i;
                ans ++ ;
                flag = true;
                break;
            }
        };
        if (!flag) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}
