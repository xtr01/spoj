#include<iostream>

using namespace std;

int main()
{
	int zmienna1, zmienna2, macierz1[100][100], macierz2[100][100];

	for (int i = 0; i < 100; i++)		//wpisywanie zer do macierzy
	{
		for (int j = 0; j < 100; j++)
		{
			macierz1[i][j] = 0;
			macierz2[i][j] = 0;
		}
	}

	while (cin >> zmienna1)		//macierz sasiedztwa skierowana
	{
		cin >> zmienna2;
		macierz1[zmienna1][zmienna2] = 1;
	}

	for (int a = 0; a < 100; a++)		//macierz sasiedztwa skierowana
	{
		for (int b = 0; b < 100; b++)
		{
			if (macierz1[a][b] == 1)
			{
				macierz1[b][a] = 1;
			}
		}
	}

	for (int a = 0; a < 100; a++)		//macierz sasiedztwa nieskierowana
	{
		for (int b = 0; b < 100; b++)
		{
			for (int c = 0; c < 100; c++)
			{
				macierz2[a][b] += macierz1[a][c] * macierz1[c][b];
			}
		}
	}
	int wynik = 1;
	for (int i = 0; i < 100; i++)		//jezeli w m1 !=0 to w m2 nie moze byc element ==0
	{
		for (int j = 0; j < 100; j++)
		{
			if (macierz1[i][j] != 0)
			{
				if (macierz2[i][j] == 0)
				{
					wynik = 0;
				}
			}
		}
	}
	
	if (wynik == 0)
	{
		cout << "NIE";
	}
	else
	{
		cout << "TAK";
	}
	return 0;
}