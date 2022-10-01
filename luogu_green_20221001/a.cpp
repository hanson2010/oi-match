#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;
const int N = 30;

int a[N][N];
int s[N][N];
PII f[N][N][N][N];
int n, m, u, total;

int get_sum(int x1, int y1, int x2, int y2) {
	return s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] +
	       s[x1 - 1][y1 - 1];
}

PII dfs(int x1, int y1, int x2, int y2, int curr) {
	PII &r = f[x1][y1][x2][y2];
	// 电力缺口从本区域节省出来
	r.first = 1, r.second = curr + u - total;
	if (x1 == x2 && y1 == y2) return r;
	// 横向分割 
	for (int i = y1; i < y2; i ++ ) {
		int area1 = get_sum(x1, y1, x2, i),
		    area2 = get_sum(x1, i + 1, x2, y2);
		if (area1 <= u && total - area1 <= u &&
		    area2 <= u && total - area2 <= u) {
			PII ans1 = dfs(x1, y1, x2, i, area1),
			    ans2 = dfs(x1, i + 1, x2, y2, area2);
			if (ans1.first + ans2.first > r.first) {
				r.first = ans1.first + ans2.first;
				r.second = min(ans1.second, ans2.second);
			} else {
			    if (ans1.first + ans2.first == r.first)
			        r.second = max(r.second, 
			                       min(ans1.second, ans2.second));
			}
		}
	}
	// 纵向分割 
	for (int i = x1; i < x2; i ++ ){ 
		int area1 = get_sum(x1, y1, i, y2),
		    area2 = get_sum(i + 1, y1, x2, y2);
		if (area1 <= u && total - area1 <= u &&
		    area2 <= u && total - area2 <= u) {
			PII ans1 = dfs(x1, y1, i, y2, area1),
			    ans2 = dfs(i + 1, y1, x2, y2, area2);
			if (ans1.first + ans2.first > r.first) {
				r.first = ans1.first + ans2.first;
				r.second = min(ans1.second, ans2.second);
			} else {
			    if (ans1.first + ans2.first == r.first)
			        r.second = max(r.second, 
			                       min(ans1.second, ans2.second));
			}
		}
	}
	return r;
}

int main() {
	cin >> n >> m >> u;
	for (int i = 1; i <= n;i ++ )
		for (int j = 1; j <= m; j ++ ) {
		    cin >> a[i][j];
		    total += a[i][j];
		}
	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
		    // 二维前缀和
		    s[i][j] = a[i][j] + s[i - 1][j] + s[i][j - 1] -
		              s[i - 1][j - 1];
	PII ans = dfs(1, 1, n, m, total);
	
	cout << ans.first << " " << ans.second;
	return 0;
}
