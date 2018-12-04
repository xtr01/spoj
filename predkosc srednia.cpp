#include<iostream>
using namespace std;

int main()
{
	int liczba_petli;
	cin >> liczba_petli;
	double srednia_predkosc, predkosc1, predkosc2;
	int wynik;

	for (int i = 1; i <= liczba_petli; i++)
	{
		cin >> predkosc1 >> predkosc2;
		srednia_predkosc = 2 / ((1 / predkosc1) + (1 / predkosc2));
		wynik = srednia_predkosc;
		cout << srednia_predkosc << endl;
	}
	return 0;
}