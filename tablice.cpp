#include<iostream>
using namespace std;

int main()
{
	int liczba_testow, dlugosc_tablicy;
	int *tablica1, *tablica2;

	cin >> liczba_testow;
	
	for (int i = 0; i < liczba_testow; i++)
	{
		cin >> dlugosc_tablicy;

		tablica1 = new int [dlugosc_tablicy];				//przydzielenie pamiêci na [dlugosc_tablicy] wierszy
		tablica2 = new int [dlugosc_tablicy];
		int b = dlugosc_tablicy -1;

		for (int a = 0; a < dlugosc_tablicy; a++)
		{
			int x;
			cin >> x;
			tablica2[b] = tablica1[a] = x;
			b--;			
		}

			
		for (int i = 0; i < dlugosc_tablicy; i++)
		{
			cout << tablica2[i] << " ";
		}
		cout << endl;
	
	}
	
	return 0;
}