#include <iostream>
using namespace std;
int main() {
	int i, k, l, c;
	float s;
	int n = 10;
	int m[10] = { 2, 5, 7, 4, 8, 5, 6, 54, 6, 3 };
	s = 0;
	c = 0;
	cin >> k >> l;
	if (1 <= k && k <= l && l <= n) {
		for (i = 0; i <= n; i++) {
			if (i >= k && i <= l) {
				s = s + m[i];
				c++;
			}
		}
		cout << s << " ";
	}
	return 0;
}