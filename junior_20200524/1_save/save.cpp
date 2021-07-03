#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main() {
    //freopen("save.in", "r", stdin);
    //freopen("save.out", "w", stdout);
    int n;
    cin >> n;
    string sos;
    string name[110];
    int maxn = 0, t[110];
    for (int i = 1; i <= n; i++) {
        t[i] = 0;
    	cin >> name[i] >> sos;
    	for (int j = 0; j < sos.length() - 2; j++) {
            if (sos[j] == 's' && sos[j + 1] == 'o' && sos[j + 2] == 's') 
                t[i]++;
            maxn = max(maxn, t[i]);
        }
    }
    for (int i = 1; i <= n; i++)
    	if (t[i] == maxn)
            cout << name[i] << " "; 
    cout << endl << maxn << endl;
    return 0;
}
