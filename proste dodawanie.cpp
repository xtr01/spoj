#include <iostream>
using namespace std;

int main() {

	int liczba;											//wartosci ktore beda dodawane
	int suma;
	int liczba_sumowan;									//liczba testÃ³w
	int dlugosc_ciagu;									//liczba liczb do zsumowania

	cin >> liczba_sumowan;								//pobiera liczbÄ testÃ³w

	for (int i = 0; i < liczba_sumowan; i++)			//pÄtla, ktÃ³ra wykonuje dodawanie az wykona t testÃ³w
	{
		dlugosc_ciagu = 0;
		suma = 0;

		cin >> dlugosc_ciagu;							//pobiera ile ciÄ		g bedzie miaÅ liczb

			for (int j = 0; j < dlugosc_ciagu; j++)
			{
				liczba = 0;
				cin >> liczba;
				suma += liczba;

			}

		cout << suma << endl;
	}


	return 0;
}