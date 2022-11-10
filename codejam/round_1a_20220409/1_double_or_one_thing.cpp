#include <iostream>
#include <string>

using namespace std;

char get_diff_after(string a, int ind) {
    char res = a[ind];
    for (int i = ind + 1; i < a.size(); i ++ ) {
        if (res != a[i]) {
            res = a[i];
            break;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++ ) {
        string a, ans;
        cin >> a;
        for (int p = 0; p < a.size() - 1; p ++ ) {
            char m = get_diff_after(a, p);
            int q = p + 1;
            if (a[p] < m && a[p] <= a[q]) {
                ans += a[p];
                ans += a[p];
            } else {
                ans += a[p];
            }
        }
        ans += a[a.size() - 1];
        cout << "Case #" << i << ": " << ans << endl;
    }
    
    return 0;
}