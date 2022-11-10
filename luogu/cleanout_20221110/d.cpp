#include <bits/stdc++.h>

using namespace std;

const int N = 50;

string w[N], cur;
bool st[N];
queue<string> q;

void bfs() {
    while (q.size()) {
        string c = q.top(), q.pop();
    }
}

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < n; i ++ ) {
        string s;
        cin >> s;
        w[i] = s, w[n + i] = s;
    }
    cin >> cur;
    
    q.push(cur);
    bfs();
    cout << cur.size() << endl;
    
    return 0;   
}
