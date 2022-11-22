#include <bits/stdc++.h>

using namespace std;

bool isn(char c) {
    if (c >= '0' && c<= '9') return true;
    else return false;
}

int main() {
    int n;
    cin >> n;

    string s;
    while (n -- ) {
        cin >> s;
        int x = 0, y = 0, z = 0;
        bool flag = 0;
        for (unsigned i = 0; i < s.size(); i ++ ) {
            char c = s[i];
            if (!isn(c) && y > 0) { flag = true; continue; }
            if (!isn(c)) x = x * 26 + c - 'A' + 1;
            else {
                if (!flag) y = y * 10 + c - '0';
                else z = z * 10 + c - '0';
            }
        }

        if (!flag)
            cout << "R" << y << "C" << x << endl;
        else {
            while (z > 26) {
                char o = 'A' + z / 26 - 1;
                cout << o;
                z = z % 26;
            }
            char o = 'A' + z - 1;
            cout << o;
            cout << y << endl;
        }
    }
        
    return 0;   
}
