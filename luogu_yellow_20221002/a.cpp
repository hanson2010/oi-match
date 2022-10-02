#include <cstring>
#include <iostream>

using namespace std;

int a, b;

int main() {
	cin >> a >> b;
	int jiao = a * 10 + b;
	int ans = jiao / 19;
	cout << ans << endl;
	return 0;
}
