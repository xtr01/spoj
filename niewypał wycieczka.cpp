#include<iostream>

using namespace std;

int pozycja(int tab0[], int tab1[], int b, int i)
{
	int tak, pozycja = 0;
	for (int a = 0; a <= b; a++)
	{
		tak = 0;
		for (int c = 0; c < i; c++)
		{
			if (a == tab0[b])
			{
				tak = 1;
			}
			if (a == tab1[b])
			{
				tak = 1;
			}
		}
		pozycja += tak;
	}
	return pozycja;
}

int main()
{
	int wejscie, i = 0;
	int **tablica1 = new int*[8];

	while (cin >> wejscie)			//tworzy kolejne kolumny tablicy dopoki sa pary sygnalow na wejsciu
	{
		tablica1[i] = new int[8];
		tablica1[i][0] = wejscie;
		cin >> wejscie;
		tablica1[i][1] = wejscie;
		i++;
	}
	
	int tak, bok_macierzy=0;
	for (int a = 0; a < 100; a++)			//ta petla sprawdzi jaki wymiar ma miec macierz do mnozenia
	{
		tak = 0;
		for (int b = 0; b < i; b++)
		{
			if(a == tablica1[b][0])
			{
				tak = 1;
			}
			if(a == tablica1[b][1])
			{
				tak = 1;
			}
		}
		bok_macierzy += tak;
	}
	
	int **tablica2 = new int*[bok_macierzy];	//tworzenie tablicy kwadratowej
	for (int c = 0; c < bok_macierzy; c++)
	{
		tablica2[c] = new int[8];

		for (int e = 0; e < bok_macierzy; e++)	//zapisywanie tablicy zerami
		{
			tablica2[c][e] = 0;
		}
	}



	for (int a = 0; a < 100; a++)			//ta petla uk³ada kolejne wyrazy i wpisuje wartosci do macierzy kwadratowej
	{
		int d = 0;
		for (int b = 0; b < i; b++)			//i z wczesniejszej petli to dlugosc pierwszej tablicy
		{
			int x=0;
			if (a == tablica1[b][0])
			{
				x = pozycja(tablica1[0], tablica1[1], tablica1[b][1], i);
				tablica2[d][x]=1; //jeszcze dopisac symetryczna jedynke
			}
			if (a == tablica1[b][1])
			{
				;
			}
			d++;
		}
	}



	for (int j = 0; j < i; j++)		//usuwanie tablicy1
	{
		delete[] tablica1[j];
	}
	for (int k = 0; k < bok_macierzy; k++)		//usuwanie tablicy2
	{
		delete[] tablica2[k];
	}
	return 0;
}