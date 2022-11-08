#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    
    if (n.c_str()[0] == '-')
        cout << n.substr(1, n.size() - 1) << endl;
    else if (n.c_str()[0] == '0')
        cout << n << endl;
    else
        cout << "-" << n << endl;
    
    return 0;   
}
