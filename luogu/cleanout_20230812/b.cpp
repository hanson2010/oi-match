#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
const double M = 1e-4;

double h, s1, v, l, k;
int n;
double t1[N], t2[N];

int main() {
    cin >> h >> s1 >> v >> l >> k >> n;

    for (int i = n - 1; i >= 0; i -- ) {
        t1[i] = (s1 - i) / v;
        t2[i] = (s1 + l - i) / v;
    }

    int ans = 0;
    for (int i = n - 1; i >= 0; i -- ) {
        double position1 = 5.0 * t1[i]* t1[i];
        double position2 = 5.0 * t2[i]* t2[i];

        if ((position1 + M >= h - k && position1 - M <= h) ||
            (position2 + M >= h - k && position2 - M <= h) ||
            (position1 - M <= h - k && position2 + M >= h))
            ans ++ ;
    }
    cout << ans << endl;

    return 0;
}
