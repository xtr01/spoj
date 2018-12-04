#include<iostream>
using namespace std;

int main()
{
	int kroki, wynik, powtorzenia;

	cin >> powtorzenia;

	for (int i = 0; i < powtorzenia; i++)
	{
		cin >> kroki;
		wynik = kroki * kroki;
		cout << wynik << endl;
	}
	return 0;
}