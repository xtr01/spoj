#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);	//wylacza synchronizacje wejscia/wyjscia w celu poprawy wydajnosci

	int TablicaWzrostow[250000], LiczbaBud, SzerokoscBud, WysokoscBud, Plakaty = 0, a = 0;

	cin >> LiczbaBud;
	cin >> SzerokoscBud; //SzerokoscBud nieistotna, uznajemy ze szerokosc wszystkich budynkow = 1
	cin >> WysokoscBud;

	TablicaWzrostow[a] = WysokoscBud;
	
	for (int i=1; i < LiczbaBud; i++)
	{
		cin >> SzerokoscBud;
		cin >> WysokoscBud;

		if (WysokoscBud > TablicaWzrostow[a])
		{
			a++;
			TablicaWzrostow[a] = WysokoscBud;
		}
		else if (WysokoscBud < TablicaWzrostow[a])
		{
			while (WysokoscBud < TablicaWzrostow[a] && a != 0)
			{
				if (WysokoscBud < TablicaWzrostow[a - 1])
				{
					Plakaty++;
					a--;
				}
				else if (WysokoscBud == TablicaWzrostow[a - 1])
				{
					Plakaty++;
					a--;
				}
				else if (WysokoscBud > TablicaWzrostow[a - 1])
				{
					Plakaty++;
					TablicaWzrostow[a] = WysokoscBud;
				}
			}
			if (a == 0 && WysokoscBud < TablicaWzrostow[a])
			{
				Plakaty++;
				TablicaWzrostow[a] = WysokoscBud;
			}
		}
	}
	Plakaty += a + 1;
	cout << Plakaty;
	return 0;
}