#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<LL, char> PLC;
int a, b, c, m;
vector<PLC> food;

int main() {
    cin >> a >> b >> c >> m;
    LL f;
    char t;
    for (int i = 0; i < m; i ++ ) {
        cin >> f >> t;
        food.emplace_back(f, t);
    }

    sort(food.begin(), food.end());
    LL ans1 = 0, ans2 = 0;
    for (auto item : food) {
        if (item.second == 'A') {
            if (a || c) ans1 ++ , ans2 += item.first;
            if (a) a -- ;
            else if (c) c -- ;
        }
        if (item.second == 'B') {
            if (b || c) ans1 ++ , ans2 += item.first;
            if (b) b -- ;
            else if (c) c -- ;
        }
    }
    cout << ans1 << " " << ans2 << endl;
    
    return 0;   
}
