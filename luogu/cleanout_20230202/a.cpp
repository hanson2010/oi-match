#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main() {
    cin >> n;
    cin >> s;
    for (int k = 1; k <= n; k ++ ) {
        bool succeeded = true;
        unordered_set<string> h;
        for (int i = 0; i <= n - k; i ++) {
            if (h.count(s.substr(i, (size_t)k))) {
                succeeded = false;
                break;
            }
            h.emplace(s.substr(i, k));
        }
        
        if (succeeded) {
            cout << k << endl;
            break;
        }
    }
    
    return 0;
}
