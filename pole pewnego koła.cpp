#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double r, d, pomocnicza, powierzchnia;
	cin >> r >> d;
	double b = 0.5*d;

	pomocnicza = pow(r, 2) - pow(b, 2);
	pomocnicza = sqrt(pomocnicza);

	powierzchnia = 3.141592654 * (pow(pomocnicza, 2));

	cout << powierzchnia;
	return 0;
}