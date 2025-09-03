#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

double a, b, c, d;


double f(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main() {
    int count = 0;
    cin >> a >> b >> c >> d;
    for (double i = -100; i <= 100; i += 0.001 ) {
        double j = i + 0.001;
        double y1 = f(i);
        double y2 = f(j);
        if ((y1 >= 0 && y2 <= 0) || (y1 <= 0 && y2 >= 0)) {
            double x = (i + j) / 2;
            cout << fixed << setprecision(2) << x;
            if( ++ count == 3)
                break;
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
