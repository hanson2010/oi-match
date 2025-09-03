#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 +10;

int n;
int a[N];
int mi[N], ma[N], f[N];


int main() {
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];

    mi[0] = a[0], ma[0] = a[0];
    f[0] = 0;
    for (int i = 1; i < n; i ++ ) {
        bool flag = false;
        if (a[i] < mi[i - 1]) {
            mi[i] = a[i];
            ma[i] = ma[i - 1];
            f[i] = f[i - 1];
            flag = true;
        }
        if (a[i] > ma[i - 1]) {
            mi[i] = mi[i - 1];
            ma[i] = a[i];
            f[i] = ma[i] - mi[i];
            flag = true;
        }
        if (!flag) {
            mi[i] = mi[i - 1];
            ma[i] = ma[i - 1];
            f[i] = ma[i] - mi[i];
        }
    }
    cout << f[n - 1] << endl;

    return 0;
}
