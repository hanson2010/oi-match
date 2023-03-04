#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 10;

int n;

int main() {
    cin >> n;
    int line;
    for (line = 1; line < N; line ++ ) {
        int nums = line * (1 + line) / 2;
        if (nums >= n) break; 
    }
    int ord = n - (line - 1) * (1 + line - 1) / 2;
    if (line % 2 == 1) {
        cout << (line - ord + 1) << "/" << ord << endl;
    } else {
        cout << ord << "/" << (line - ord + 1) << endl;
    }

    return 0;
}
