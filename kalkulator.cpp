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

		for (a = dlugosc_ciagu; a > 1; a--)
		{
			cin >> tablica[a];
		}

		for (int i = 0; i < dlugosc_ciagu; i++)
		{
			cout << tablica[i] << " ";
		}

	}
	system("pause");
	return 0;
}