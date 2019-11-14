#include <iostream>
using namespace std;
int main()
{
	int n = 10;
	int m[10] = { 1, 3, 45, 6, 7, 5, 33, 65, 90, 2 };
	int i, a, b, c;
	a = m[0];
	b = m[1];
	c = a + b;
	cout << c << " ";
	for (i = 2; i <= n; i++) {
		c = c + m[i];
		m[i] = c;
		cout << m[i] << " ";
	}
	return 0;
}