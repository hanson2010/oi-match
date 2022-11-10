#include <iostream>

using namespace std;

char get_ch(int x, int y) {
    if ((x <= 2) && (y <= 2)) return '.';
    if ((x % 2 == 1) && (y % 2 == 1)) return '+';
    if ((x % 2 == 0) && (y % 2 == 0)) return '.';
    if ((x % 2 == 1) && (y % 2 == 0)) return '-';
    if ((x % 2 == 0) && (y % 2 == 1)) return '|';
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++ ) {
        cout << "Case #" << i << ":" << endl;
        int r, c;
        cin >> r >> c;
        for (int j = 1; j <= 2 * r + 1; j ++) {
            for (int k = 1; k <= 2 * c + 1; k ++ )
                cout << get_ch(j, k);
            puts("");
        }
    }
    
    return 0;
}