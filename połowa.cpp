#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long petle, a, b, skrocone_a, skrocone_b, wynik, skrocony_wynik;
	cin >> petle;

	for (int i = 0; i < petle; i++)
	{
		cin >> a >> b;
		skrocone_a = a % 10;
		skrocone_b = b % 10;
		if (skrocone_a == 0 && skrocone_b == 0)
		{
			skrocone_a = 10;
			skrocone_b = 10;
		}
		else if (skrocone_a == 0)
		{
			skrocone_a = 10;
		}
		else if (skrocone_b == 0)
		{
			skrocone_b = 10;
		}

		wynik = pow(skrocone_a, skrocone_b);
		skrocony_wynik = wynik % 10;
		cout << skrocony_wynik << endl;
	}

	return 0;
}