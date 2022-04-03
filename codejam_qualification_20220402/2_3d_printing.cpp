#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int D = 1e6;

int colors[4][3];
int used[4];

int get_min(int color[]) {
    return min(min(color[0], color[1]), color[2]);
}

void print_answer() {
    cout << used[0] << " " << used[1] << " " << used[2] << " " << used[3] << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++ ) {
        for (int j = 0; j < 3; j ++ ) 
            for (int k = 0; k < 4; k ++ )
                cin >> colors[k][j];
        cout << "Case #" << i << ": ";
        memset(used, 0, sizeof used);
        int temp = 0;
        for (int k = 0; k < 4; k ++ ) {
            int m = get_min(colors[k]);
            temp += m;
            if (temp >= D) {
                used[k] = D - (temp - m);
                print_answer();
                break;
            } else {
                used[k] = m;
            }
        }
        if (temp < D)
            cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}