#include<iostream>
using namespace std;

int main()
{
	int min = 100;
	int wejscie;
	int polozenie = 0;
	int polozenie_wlasciwe;
	do
	{
		cin >> wejscie;
		polozenie++;

		if (wejscie <= min)
		{
			min = wejscie;
			polozenie_wlasciwe = polozenie;
		}

	} while (wejscie != 0);

	cout << min << endl << polozenie_wlasciwe;

	return 0;
}