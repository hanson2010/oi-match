#include <bits/stdc++.h>

using namespace std;

int l, n;

int main() {
    cin >> l >> n;
    int mid = (l + 1) / 2;
    bool odd = l % 2;
    // left, middle, right
    int ll = l, mm = 0, rr = 1;
    for (int i = 1; i <= n; i ++ ) {
        int s;
        cin >> s;
        if (s < ll) ll = s;
        if (s > rr) rr = s;
        if (!odd && (s == mid || s == mid + 1)) mm = s;
        else if (abs(s - mid) < abs(mm - mid)) mm = s; 
    }

    int ans1;
    if (mm <= mid) ans1 = mm;
    else ans1 = l + 1 - mm;
    int ans2 = max(l + 1 - ll, rr);
    cout << ans1 << " " << ans2 << endl;
    
    return 0;   
}
