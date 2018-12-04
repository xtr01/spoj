#include<iostream>
#include<string>
using namespace std;

int strToInt(string s)
{
	bool m = false;
	int tmp = 0;
	int i = 0;
	if (s[0] == '-')
	{
		i++;
		m = true;
	}
	while (i<s.size())
	{
		tmp = 10 * tmp + s[i] - 48;
		i++;
	}
	return m ? -tmp : tmp;
}

int main()
{
	int petla;
	cin >> petla;

	for (int i = 0; i < petla; i++)
	{
		string zdanie, bufor;
		int dlugosc_zdania;

		cin >> zdanie;
		dlugosc_zdania = zdanie.size() //zwraca d³ugosc stringa

			bufor = zdanie[0];
		cout << bufor;


	}
	return 0;
}