#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int N = 110;

LL a[N];


int main() {
    int c = 0;
    
    cin >> a[c ++ ];
    while (a[c - 1]) {
        cin >> a[c ++ ];
    }
    for (int i = c - 2; i >= 0; i -- ) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
