#include <bits/stdc++.h>

using namespace std;

const int N = 110;

int k;
int a[N];


int main() {
    cin >> k;

    bool flag = 0;
    for (int i = 10000; i <= 30000; i ++ ) {
        int sub1 = i / 100,
            sub2 = i % 10000 / 10,
            sub3 = i % 1000;
        if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) {
            cout << i << endl;
            flag = 1;
        }
    }
    if (!flag) puts("No");
    
    return 0;   
}
