#include<iostream>
using namespace std;

int main()
{
	int n, b, x, y;
	double a;
	cin >> b;

	for (int i = 0; i<b; i++)
	{
		cin >> n >> x >> y;
		double wartosc = 0.0, modulo1 = 0.0, modulo2 = 0.0;

		for (int j = 2; j<n; j++)
		{
			wartosc = j;
			modulo1 = j % x;
			modulo2 = j % y;

			if (modulo1 == 0 && modulo2 != 0)
			{
				cout << j << " ";
			}
		}
		cout << endl;

	}
	return 0;
}