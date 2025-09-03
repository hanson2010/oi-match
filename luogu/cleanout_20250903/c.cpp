#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 1; i <= n; i ++ ) {
        string s;
        cin >> s;
        mp[s] = i;
    }
}
