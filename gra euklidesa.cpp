#include<iostream>
using namespace std;


int main()
{
	int petle, gracz1, gracz2;

	cin >> petle;

	for (int i = 0; i<petle; i++)
	{
		cin >> gracz1;
		cin >> gracz2;
		int wynik = 0;

		while (gracz1 != gracz2)
		{
			if (gracz1>gracz2)
			{
				gracz1 = gracz1 - gracz2;
			}
			else if (gracz1<gracz2)
			{
				gracz2 = gracz2 - gracz1;
			}
			else {}
		}
		wynik = gracz1 + gracz2;
		cout << wynik << endl;
	}
	return 0;
}