#include<iostream>
#include<vector>
#include<set>
using namespace std;

struct Pos {
    int x, y;
	Pos(){}
	Pos(int _x, int _y):x(_x),y(_y){}
	bool operator < (const Pos& b)const {
		if(x == b.x && y == b.y) return false;
		if(x != b.x)
		    return x < b.x; 
		else
		    return y < b.y;
	}
};

set<Pos> pacman(int n, int k) {
    set<Pos> ret;
    int i, j;
    if(k == 0) {
        for(i = 0; i < n; i++) ret.insert(Pos{i, i});
    } else if(k == n - 1) {
        for(i = n - 1; i >= 0; i--) ret.insert(Pos{n - i - 1, i});
    } else {
        i = 0;
        for(j = k; j < n; j++) { ret.insert(Pos{i, j}); i++; }
        i = n - 1;
        for(j = n - k - 1; j < n; j++) { ret.insert(Pos{i, j}); i--; }
        j = n - 1;
        for(i = n - k - 1; i >= 0; i--) { ret.insert(Pos{i, j}); j--; }
        j = 0;
        for(i = k; i >= 0; i--) { ret.insert(Pos{i, j}); j++; }
    }
    return ret;
}

int sum(vector<vector<int>> a, set<Pos> t) {
    int ret = 0;
    for(auto it:t) {
        ret += a[it.x][it.y];
    }
    return ret;
}

int main() {
    freopen("pacman.in", "r", stdin);
    freopen("pacman.out", "w", stdout);
    int n;
    cin >> n;
    vector<vector<int>> array(n);
    for(int i = 0; i < n; i++) {
        array[i].resize(n);
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    vector<set<Pos>> pacmen(n);
    for(int k = 0; k < n; k++) {
        pacmen[k] = pacman(n, k);
    }
    set<Pos> t;
    int tt, mx = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            t.clear();
            for(auto it1:pacmen[i]) {
                t.insert(it1);
            }
            for(auto it2:pacmen[j]) {
                t.insert(it2);
            }
            tt = sum(array, t);
            if(tt > mx) mx = tt;
        }
    }
    cout << mx << endl;
    return 0;
}
