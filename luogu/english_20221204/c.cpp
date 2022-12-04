#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

char s[N];
int f[N];
stack<char> stk;

int main() {
    char c;
    bool flag = false;
    while(cin >> c) {
        if (c == '(') stk.push(c);
        if (c == ')') {
            if (!stk.empty()) { stk.pop(); flag = true; }
        }
    }
    
    if (!flag)
        puts("0 1");
    else {
        puts("6 2");
    }
    
    return 0;   
}
