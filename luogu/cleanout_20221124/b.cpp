#include <bits/stdc++.h>

using namespace std;

const int N = 16;

bool t[N];
unordered_map<int, string> m;

string p(int n) {
    if (m.count(n)) {
        return m.at(n);
    }
    int n1 = n;
    memset(t, 0, sizeof t);
    for (int i = 0; i < N; i ++ ) {
        if (n1 & 1) t[i] = 1;
        n1 /= 2;
    }
    string ret = "";
    for (int i = N - 1; i >= 0; i -- ) {
        if (t[i]) {
            if (ret.compare("")) ret += "+";
            if (i == 1)
                ret += "2";
            else {
                ret += "2(";
                if (i == 0 || i == 2)
                    ret += to_string(i);
                else
                    ret += p(i);
                ret += ")";
            }
        }
    }
    m.emplace(n, ret);
    return ret;
}

int main() {
    int n;
    cin >> n;
    
    string ans = p(n);
    cout << ans << endl;

    return 0;
}
