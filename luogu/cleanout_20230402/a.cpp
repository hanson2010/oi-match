#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main() {
    int a;
    cin >> a;
    while (a > 0) {
        s.push(a);
        cin >> a;
    }
    while (!s.empty()) {
        a = s.top(), s.pop();
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
