#include<iostream>
#include<string>
using namespace std;

int strToInt(string s)		//funkcja zamiany string na int
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

string intToStr(int n)
{
	string tmp, ret;
	if (n < 0) {
		ret = "-";
		n = -n;
	}
	do {
		tmp += n % 10 + 48;
		n -= n % 10;
	} while (n /= 10);
	for (int i = tmp.size() - 1; i >= 0; i--)
		ret += tmp[i];
	return ret;
}

int main()
{
	int petla;
	cin >> petla;

	for (int i = 0; i < petla; i++)
	{
		string wyraz, skompresowany, litera, bufor1, bufor2, bufor3;
		int dlugosc_wyrazu;

		cin >> wyraz;
		dlugosc_wyrazu = wyraz.size(); //zwraca d³ugosc stringa

		for (int j = 0; j < dlugosc_wyrazu; j++)	//petla skracania jednego wyrazu
		{
			litera = wyraz[j];

			if (wyraz[j] == 0) bufor1 = litera;

			else if (wyraz[j] == 1) bufor2 = litera;

			else if (wyraz[j] == 2) bufor3 = litera;

			else if (bufor1 == bufor2 && bufor1 == bufor3)
			{

				int pomocnicza = 2;

				while (bufor1 == bufor3)
				{
					j++;
					bufor3 = wyraz[j];
					pomocnicza++;
				}

				bufor2 = intToStr(pomocnicza);
				skompresowany += bufor1;
				skompresowany += bufor2;
				bufor1 = bufor3;
				j++;
				bufor2 = wyraz[j];
				j++;
				bufor3 = wyraz[j];

			}
			else
			{
				skompresowany += bufor1;
				bufor1 = bufor2;
				bufor2 = bufor3;
				bufor3 = wyraz[j];
			}
		}
		cout << skompresowany << bufor1 << bufor2 << bufor3 << endl;  //bufory nie powinny tu byc
	}
	return 0;
}