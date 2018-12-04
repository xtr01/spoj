#include<iostream>
using namespace std;

int main()
{
	int min;
	int max;
	int wejscie;
	int polozenie = 0;
	int polozenie_najwczesniejsze_min;
	int polozenie_ostatnie_max;

	for (int i = 0; i <= 1000; i++)
	{
		cin >> wejscie;
		polozenie++;

		if (polozenie == 1)
		{
			min = wejscie;
			max = wejscie;
		}
		else if (wejscie >= max)
		{
			max = wejscie;
			polozenie_ostatnie_max = polozenie;
		}
		else if (wejscie < min)
		{
			min = wejscie;
			polozenie_najwczesniejsze_min = polozenie;
		}

	}

	cout << min << endl << polozenie_najwczesniejsze_min << endl;
	cout << max << endl << polozenie_ostatnie_max;
	return 0;
}