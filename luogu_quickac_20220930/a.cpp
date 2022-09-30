#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 30;

int a[N];

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i ++ ) {
        cin >> a[i];
    }
    
    int ans = 0;
    for (int i = 0; i < (1 << n); i ++ ) {
        int cnt = 0, suma = 0;
        for (int j = 0; j < n; j ++ )
            if ((i >> j & 1) == 1) {
                cnt ++ ;
                suma += a[j];
            }
        if (cnt == 3 && is_prime(suma)) ans ++ ;
    }
    
    cout << ans << endl;
    return 0;
}
