#include<iostream>
using namespace std;

int main()
{
	int liczba_zestawow_danych, licznosc_gr1, licznosc_gr2, liczba_cukierkow;

	cin >> liczba_zestawow_danych;

	for (int i = 0; i < liczba_zestawow_danych; i++)
	{
		cin >> licznosc_gr1 >> licznosc_gr2;

		if (licznosc_gr1 >= licznosc_gr2)
		{
			int a = 1;

			do
			{
				liczba_cukierkow = licznosc_gr2 * a;
				a++;

			} while (liczba_cukierkow % licznosc_gr1 > 0);

			a = 1;
			cout << liczba_cukierkow << endl;
		}
		else if (licznosc_gr1 < licznosc_gr2)
		{
			int a = 1;

			do
			{
				liczba_cukierkow = licznosc_gr1 * a;
				a++;

			} while (liczba_cukierkow % licznosc_gr2 > 0);

			a = 1;
			cout << liczba_cukierkow << endl;
		}
	}
	return 0;
}