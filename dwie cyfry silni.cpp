#include<iostream>
using namespace std;

int main()
{
	double liczba_calkowita;
	int liczba_przypadkow;
	int liczba_dziesiatek;
	int liczba_jednosci;
	long long int silnia;

	cin >> liczba_przypadkow;

	for (int i = 1; i <= liczba_przypadkow; i++)
	{
		cin >> liczba_calkowita;

		if (liczba_calkowita <= 10 && liczba_calkowita > 1)
		{
			silnia = 1;

			for (int n = 1; n <= liczba_calkowita; n++)
			{
				silnia = silnia * n;
			}
		}
		else if (liczba_calkowita > 10)
		{
			silnia = 100;
		}
		else if (liczba_calkowita <= 1)
		{
			silnia = 1;
		}

		liczba_dziesiatek = silnia % 100 / 10;
		liczba_jednosci = silnia % 10;
		cout << liczba_dziesiatek << " " << liczba_jednosci << endl;
	}
	return 0;
}
