#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, a;
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
		for (i = 1, a = n + 1; i <= n; i++, a--)
		{
			if (i % 2 == 1)
				cout << m[i] << " ";
			else
				cout << m[a] << " ";
		}
	}
	return 0;
}