#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

const int N = 110;

string s[N];
bool st[N];

char is_invalid(string s) {
    unordered_map<char, int> existed;
    for (int i = 0; i < s.size(); i ++ ) {
        if (existed.count(s[i])) {
            if (i - existed[s[i]] > 1)
                return true;
            existed[s[i]] = i;
        } else {
            existed.emplace(s[i], i);
        }
    }
    return false;
}

bool is_same_chars(string s) {
    char c = s[0];
    for (int i = 1; i < s.size(); i ++ )
        if (s[i] != c) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt ++ ) {
        int n;
        cin >> n;
        // 初始化
        bool flag = true;
        memset(st, 0, sizeof st);
        for (int i = 1; i <= n; i ++ ) {
            cin >> s[i];
            // 输入要吃干净，不能挑食
        }
        string ans;
        if (flag) {
            bool concatenated;
            // 连接顺序重要，需要先连接第2个字符串是由单一字符组成的情况
            do {
                concatenated = false;
                for (int i = 1; i <= n; i ++ )
                    for (int j = 1; j <= n; j ++ ) {
                        if (i != j &&
                            !st[i] && !st[j] &&
                            s[i][s[i].size() - 1] == s[j][0] &&
                            is_same_chars(s[j])) {
                                s[i] += s[j];
                                st[j] = 1;
                                concatenated = true;
                        }
                    }
            } while (concatenated);
            do {
                concatenated = false;
                for (int i = 1; i <= n; i ++ )
                    for (int j = 1; j <= n; j ++ ) {
                        if (i != j &&
                            !st[i] && !st[j] &&
                            s[i][s[i].size() - 1] == s[j][0]) {
                                s[i] += s[j];
                                st[j] = 1;
                                concatenated = true;
                        }
                    }
            } while (concatenated);
            for (int i = 1; i <= n; i ++ )
                if (!st[i]) ans += s[i];
            if (is_invalid(ans)) flag = false;
        }
        if (flag)
            cout << "Case #" << tt << ": " << ans << endl;
        else
            cout << "Case #" << tt << ": IMPOSSIBLE" << endl;
    }
    
    return 0;
}