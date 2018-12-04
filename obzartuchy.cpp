#include<iostream>
using namespace std;

int main()
{
	int seria, liczba_obzartuchow, liczba_paczkow_w_pudelku, przypadek_obzartucha;

	cin >> seria;

	for (int a = 0; a < seria; a++)
	{
		cin >> liczba_obzartuchow >> liczba_paczkow_w_pudelku;
		double zapotrzebowanie_na_paczki=0;
		double dzielnik,roznica;
		int zaokraglenie;

		for (int b = 0; b < liczba_obzartuchow; b++)
		{
			cin >> przypadek_obzartucha;
			zapotrzebowanie_na_paczki += (86400 / przypadek_obzartucha);
		}

		dzielnik = zapotrzebowanie_na_paczki / liczba_paczkow_w_pudelku;
		zaokraglenie = dzielnik;
		roznica = dzielnik - zaokraglenie;

		if (roznica > 0)
		{
			zaokraglenie++;
			cout << zaokraglenie << endl;
		}
		else if (roznica == 0)
		{
			cout << zaokraglenie << endl;
		}

	}
	
	return 0;
}