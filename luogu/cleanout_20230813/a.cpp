#include <bits/stdc++.h>

using namespace std;

typedef unordered_map<int, int> UM;

const int N = 1e4 +10;

int n, m1, m2;
int s[N];
UM fm, fs;

UM factorize(int num) {
    UM factors;
    int i = 2;
    while (num > 1) {
        if (num % i == 0) {
            factors[i] ++ ;
            num /= i;
        } else {
            i ++ ;
        }
    }
    return factors;
}

int main() {
    cin >> n >> m1 >> m2;
    for (int i = 1; i <= n; i ++ ) cin >> s[i];
    if (m1 == 1 && m2 == 1) {
        cout << 0 << endl;
        return 0;
    }
        
    int ans = 0x3f3f3f3f;
    fm = factorize(m1);
    for (auto& pair : fm)
        pair.second *= m2;
    for (int i = 1; i <= n; i ++ ) {
        bool flag = true;
        int ans2 = -1;
        fs = factorize(s[i]);
        for (const auto& pair : fm) {
            if (fs.count(pair.first) == 0) {
                flag = false;            // 互质
                break;
            }
            ans2 = max(ans2, (int)ceil((double)pair.second / (double)fs[pair.first]));
        }
        if (flag)
            ans = min(ans, ans2);
    }
    if (ans == 0x3f3f3f3f)
        ans = -1;
    cout << ans << endl;

    return 0;
}
