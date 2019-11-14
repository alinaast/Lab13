#include <iostream>
using namespace std;
int main() {
	int i;
	int n = 5;
	int m[5];
	m[0] = 1;
	for (i = 1; i <= n; i++)
	{
		m[i] = m[i - 1] + 2;
		cout << m[i] << " ";
	}
	return 0;
}