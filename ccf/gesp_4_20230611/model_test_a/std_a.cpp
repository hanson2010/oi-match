#include <bits/stdc++.h>

using namespace std;

int a, b;

bool is_prime(int d) {
    for (int i = 2; i * i <= d; i ++ )
        if (d % i == 0) return false;
    return true;    
}

int main() {
    cin >> a >> b;
    for (int i = a; i <= b; i ++ ) {
        int j = (i % 10) * 10 + i / 10;
        if (is_prime(i) && is_prime(j))
            cout << i << endl;
    }

    return 0;
}
