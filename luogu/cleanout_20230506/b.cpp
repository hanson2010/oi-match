#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

int n;
string s;
int a[N];

int main() {
    cin >> n;
    cin >> s;
    s.insert(0, "0");
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    if (s[1] == '0' || s[n] == '0') {
        cout << -1 << endl;
        return 0;
    }
        
    int cur = 1;
    int ans = 0;
    while (cur < n) {
        bool flag = false;
        for (int i = a[ans]; i > 0; i -- ) {
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
