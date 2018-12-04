#include<iostream>
using namespace std;

int main()
{

	int **tablica, **tablica_transponowana, **tablica_wymnozona;
	int liczba_wierszy, liczba_kolumn;

	cin >> liczba_wierszy;
	cin >> liczba_kolumn;

	tablica = new int *[liczba_wierszy];				//przydzielenie pamiêci na [liczba_wierszy] wierszy

	for (int i = 0; i < liczba_wierszy; i++)
	{
		tablica[i] = new int[liczba_kolumn];	 		//przydzielenie dla ka¿dego wiersza po [liczba_kolumn] komórek

		for (int a = 0; a < liczba_kolumn; a++)
			cin >> tablica[i][a];						//wczytanie i zapis danych do konkretnego wiersza w tablicy
	}

	tablica_transponowana = new int *[liczba_kolumn];

	for (int i = 0; i < liczba_kolumn; i++)
	{
		tablica_transponowana[i] = new int[liczba_wierszy];

		for (int a = 0; a < liczba_wierszy; a++)
			tablica_transponowana[i][a] = tablica[a][i];		//transponowanie pierwszej tablicy
	}

	tablica_wymnozona = new int *[liczba_kolumn];

	for (int i = 0; i < liczba_kolumn; i++)
	{
		tablica_wymnozona[i] = new int[liczba_kolumn];		//tworzy kolejne wiersze w kolumnach i

		for (int a = 0; a < liczba_kolumn; a++)			//zmienna a okreœla pozycjê komórki w kolumnie i
		{
			int oblicz = 0, iloraz1 = 0, iloraz2 = 0;

			for (int b = 0; b < liczba_wierszy; b++)		//zmienna b 
			{
				iloraz1 = tablica_transponowana[i][b];
				iloraz2 = tablica[b][a];
				oblicz = (iloraz1 * iloraz2) + oblicz;
			}

			tablica_wymnozona[i][a] = oblicz;				//wpisuje wynik oblicz do komórki a w kolumnie i
		}

	}

	for (int i = 0; i < liczba_kolumn; i++)				//wyswietlanie wyniku
	{
		for (int a = 0; a < liczba_kolumn; a++)
		{
			cout << tablica_wymnozona[i][a] << " ";
		}
		cout << endl;
	}

	/*	for (int i = 0; i<liczba_wierszy; i++)				//zwolnienie pamiêci
	delete[] tablica[i];

	delete[] * tablica;
	*/
	return 0;
}