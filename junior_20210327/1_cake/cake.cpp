#include<iostream>
using namespace std;

int main() {
    freopen("cake.in", "r", stdin);
    freopen("cake.out", "w", stdout);
    int n;
    int a, b, c, d;
    int cuts = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        d = a + b + c;
        if(d == a || d == b || d == c)
            cuts = 0;
        else if((d == a * 2 && c == 0) || (d == a * 2 && b == 0) || (d == c * 2 && a == 0))
            cuts = 1;
        else if((a == 0 || b == 0 || c == 0) || (d == a * 2 || d == b * 2 || d == c * 2) || (a == b || b == c || c == a))
            cuts = 2;
        else
            cuts = 3;
        cout << cuts << endl;
    }
    return 0;
}
