#include <bits/stdc++.h>

using namespace std;

const int N = 110;

int n;
int a[N];

int main() {
    cin >> n;

    cout << n << endl;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < n; j ++ ) {
            if (j != i) a[j] ^= 1;
            cout << a[j];
        }
        cout << endl;
    }
    
    return 0;   
}
