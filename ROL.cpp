#include<iostream>
using namespace std;

int main()
{
	int liczba_testow, dlugosc_ciagu, *tablica;

	cin >> liczba_testow;

	for (int i = 0; i < liczba_testow; i++)
	{
		cin >> dlugosc_ciagu;

		tablica = new int[dlugosc_ciagu];
		int c = 0;

		for (int a = 0; a < dlugosc_ciagu; a++)
		{
			if (a < 1)
			{
				cin >> tablica[dlugosc_ciagu -1];
			}
			else if (a >= 1)
			{
				cin >> tablica[c];
				c++;
			}
		}

		for (int b = 0; b < dlugosc_ciagu; b++)
		{
			cout << tablica[b] << " ";
		}

		cout << endl;
	}
	return 0;
}