#include <cstring>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int N = 1e5 + 10;

int n;
int s0[N], s1[N];
unordered_map<int, int> m;

int main() {
    cin >> n;
    
    int ans = 0;
    for (int i = 1; i <= n; i ++ ) {
        int a;
        cin >> a;
        if (a == 0) s0[i] = s0[i - 1] + 1, s1[i] = s1[i - 1];
        else s0[i] = s0[i - 1], s1[i] = s1[i - 1] + 1;
        int k = s0[i] - s1[i];
        if (m.count(k)) ans = max(ans, i - m[k]);
        else m.emplace(k, i);
    }
    
    cout << ans << endl;
    return 0;
}
