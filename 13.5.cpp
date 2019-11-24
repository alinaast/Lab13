#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, c;
	cout << "Введите размер массива: ";
	cin >> n;
	if (n > 0)
	{
		int* m = new int[n];
		for (i = 1; i <= n; i++)
		{
			cout << "Введите " << i << " элемент: ";
			cin >> m[i];
		}
		for (i = 1; i <= n; i++)
			if (i % 2 == 1)
				cout << i << " элемент = " << m[i] << " ";
		cout << endl;
		for (i = n; i >= 1; i--)
			if (i % 2 == 0)
				cout << i << " элемент = " << m[i] << " ";
	}
	return 0;
}
