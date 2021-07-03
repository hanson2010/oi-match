#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool match(string a, string b) {
    int i = 0;
    for(int j = 0; j < b.size(); j++) {
        while(a[i] != b[j]) {
            i++;
            if(i >= a.size()) return false;
        }
    }
    return true;
}

int count(string a, string b, int n) {
    int ret = 0;
    if(match(a, b))
        ret++;
    if(match(a, b.substr(1)))
        ret += (n - 1);
    else
        if(b.size() > 2)
            ret += count(a, b.substr(2), n - 1);
    if(match(a, b.substr(0, n - 1)))
        ret += (n - 1);
    else
        if(b.size() > 2)
            ret += count(a, b.substr(0, n - 2), n - 1);
    return ret;
}

int main() {
    freopen("block.in", "r", stdin);
    freopen("block.out", "w", stdout);
    int n;
    string a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    cout << count(a, b, n) << endl;
    return 0;
}
