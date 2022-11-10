#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
    cin >> n >> k;

    int ans = n, bot = n;
    while (bot >= k) {
        ans += (bot / k);
        bot = bot % k + bot / k;
    }
    cout << ans << endl;
    
    return 0;   
}
