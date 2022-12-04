#include <bits/stdc++.h>

using namespace std;

vector<string> v;

int main() {
    string s;
    int ml = 0;
    while (getline(cin, s)) {
        v.push_back(s);
        ml = max(ml, (int)s.size());
    }
    
    for (int i = 0; i < ml + 2; i ++ ) cout << "*";
    puts("");
    
    bool flag = true;
    for (auto s : v) {
        int ss = ml - (int)s.size(), l = 0, r = 0;
        cout << "*";
        if (ss % 2) {
            if (flag) l = ss / 2, r = ss - l, flag = !flag;
            else r = ss / 2, l = ss - r, flag = !flag;
        } else {
            l = r = ss / 2;
        }
        for (int j = 0; j < l; j ++ ) cout << " ";
        cout << s;
        for (int j = 0; j < r; j ++ ) cout << " ";
        cout << "*";
        puts("");
    }
    
    for (int i = 0; i < ml + 2; i ++ ) cout << "*";
    puts("");
    
    return 0;   
}
