// Problem: C. Robin Hood in Town
// Contest: Codeforces Round 974 (Div. 3)
// URL: https://codeforces.com/contest/2014/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

int T;
int n;

int main() {
    cin >> T;
    while (T -- ) {
        cin >> n;
        set<int> s;
        int a;
        double average = 0;
        for (int i = 0; i < n; i ++ ) {
            cin >> a;   
            average += (double) a / n;
            s.emplace(a);
        }
        int middleIndex = s.size() / 2;
        auto middleIterator = next(s.begin(), middleIndex);
        int middleValue = *middleIterator;
        double m = (double) middleValue;

        if (n <= 2)
            cout << "-1" << endl;
        else if (2 * m < average)
            cout << "0" << endl;
        else
            cout << (int) ((2 * m - average) * n) + 1 << endl;
    }
    
    return 0;
}
