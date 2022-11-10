#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

int s[N];

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++ ) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j ++ ) 
            cin >> s[j];
        sort(s, s + n);
        int ans = 0;
        int expected = 1;
        for (int j = 0; j < n; j ++ ) {
            if (s[j] >= expected) {
                ans ++ ;
                expected ++;
            }
        }
        cout << "Case #" << i << ": " << ans << endl;
    }
    
    return 0;
}