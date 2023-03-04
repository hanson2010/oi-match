#include <bits/stdc++.h>

using namespace std;

int n;
string m;

int ctoi(char c) {
    if (n == 16) {
        if (c < 'A') return c - '0';
        else if (c < 'a') return c - 'A' + 10;
        else return c - 'a' + 10;
    } else {
        return c - '0';
    }
}

char itoc(int i) {
    if (i < 10) return '0' + i;
    else return 'A' + i - 10;
}

string add1(string s) {
    string ret;
    int h = 0;
    for (unsigned i = 0; i < s.size(); i ++ ) {
        int t = ctoi(s[i]) + ctoi(s[s.size() - i - 1]) + h;
        h = 0;
        while (t >= n) h ++, t -= n;
        ret.push_back(itoc(t));
    }
    if (h) ret.push_back(itoc(h));
    reverse(ret.begin(), ret.end());  
    return ret;
}

bool check(string s) {
    for (unsigned i = 0; i <= s.size() / 2; i ++ )
        if (s[i] != s[s.size() - i - 1]) return false;
    return true;
}

int main() {
    cin >> n >> m;
    if (check(m)) {
        cout << "STEP=0" << endl;
        return 0;
    }
    for (int s = 1; s <= 30; s ++ ) {
        m = add1(m);
        if (check(m)) {
            cout << "STEP=" << s << endl;
            return 0;
        }
    }
    cout << "Impossible!" << endl;
    
    return 0;
}
