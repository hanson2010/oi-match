#include <bits/stdc++.h>

using namespace std;

const int N = 110;

int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    
    for (int i = 0; i < n; i ++ ) {
        int c = 0;
        for (int j = 0; j < i; j ++ ) {
            if (a[j] < a[i]) c ++ ;
        }
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}
