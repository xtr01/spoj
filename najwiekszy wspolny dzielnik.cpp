#include<iostream>
using namespace std;
int nwd(int, int);

int main()
{
	int liczba_testow, a, b, c;
	cin >> liczba_testow;

	for (int i = 0; i < liczba_testow; i++)
	{
		cin >> a >> b;
		cout << nwd(a, b) << endl;
	}

	return 0;
}

int nwd(int pierwsza_liczba, int druga_liczba)
{

	do
	{
		if (pierwsza_liczba > druga_liczba)
		{
			pierwsza_liczba = pierwsza_liczba - druga_liczba;
		}
		else if (pierwsza_liczba < druga_liczba)
		{
			druga_liczba = druga_liczba - pierwsza_liczba;
		}

	} while (pierwsza_liczba != druga_liczba);

	return pierwsza_liczba;
}