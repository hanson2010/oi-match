#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;

int d[N];

char decode(char a, int kk) {
    int t = d[kk];
    if (a >= 'a' && a - 'a' < t) t = t - 26;
    if (a <= 'Z' && a - 'A' < t) t = t - 26;
    return a - t;
}

int main() {
    string k, c, m;
    cin >> k >> c;
    
    int lk = k.size(), lc = c.size();
    transform(k.begin(), k.end(), k.begin(), ::toupper);
    for (int i = 0; i < lk; i ++ ) {
        d[i] = k[i] - 'A';
    }
    
    string ans{};
    for (int i = 0; i < lc; i ++ ) {
        ans.push_back(decode(c[i], i % lk));
    }
    
    cout << ans << endl;
    return 0;
}
