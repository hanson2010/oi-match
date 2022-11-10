#include<iostream>
#include<vector>
using namespace std;

struct Pos {
    int x;
    int y;
    bool operator==(const Pos&rhs) const{
        return x == rhs.x && y == rhs.y;
    }
};

int move(int n, int m, vector<Pos> mm, Pos a, Pos b) {
    int ret = 0;
    
    return ret;
}

int main() {
    freopen("ball.in", "r", stdin);
    freopen("ball.out", "w", stdout);
    int n, m, q;
    cin >> n >> m >> q;
    vector<Pos> mm(m);
    int x, y;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        mm[i] = Pos{x, y};
    }
    Pos a, b;
    int x1, y1, x2, y2;
    for(int j = 0; j < q; j++) {
        cin >> x1 >> y1 >> x2 >> y2;
        a = Pos{x1, y1};
        b = Pos{x2, y2};
        cout << move(n, m, mm, a, b) << endl;
    }
    return 0;
}
