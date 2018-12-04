#include<iostream>
using namespace std;

float metry; //zmienna globalna

float ile_cali(float argument);
float ile_jardow(float argument);


int main()
{
	cout << "podaj ile metrow chcesz przeliczyc na cale" << endl;
	cin >> metry;

	cout << "wartosc " << metry << " m po przeliczeniu na cale wynosi: " << ile_cali(metry) << ", w przeliczeniu na jardy: " << ile_jardow << endl;

	system("pause");
	return 0;
}

float ile_cali(float argument)
{
	float zmienna_pomocnicza = argument * 39.37;  //zmienna lokalna
	return zmienna_pomocnicza;
}

float ile_jardow(float argument)
{
	return argument * 1.0936;
}
