#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 +10;

int n;
int a[N];


int main() {
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];

    int ans = 0;
    // up down up
    bool up = false, down = false;
    for (int i = 1; i < n; i ++ ) {
        if (a[i] > a [i - 1]) {
            if (up and down) {
                ans ++ ;
                down = false;
            } else {
                if (not up)
                    up = true;
            }
        }
        if (a[i] < a [i - 1])
            down = true;
    }
    cout << ans << endl;

    return 0;
}
