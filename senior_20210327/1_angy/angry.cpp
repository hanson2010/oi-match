#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int total(int n, int k, vector<int> a) {
    int ret = 0;
    return ret;
}

int main() {
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    int n, k;
    vector<int> a;
    cin >> n;
    cin >> k;
    for(int i = 0; i < k; i++)
        cin >> a[i];
    cout << total(n, k, a) % (pow(10, 9) + 7) << endl;
    return 0;
}
