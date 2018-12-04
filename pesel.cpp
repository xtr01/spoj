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

	for (int i = 0; i<petla; i++)
	{
		int pesel[11], suma_mnozen;
		string strpsl, tmp;
		cin >> strpsl;

		for (int a = 0; a<11; a++)
		{
			tmp = strpsl[a];
			pesel[a] = strToInt(tmp);
		}

		suma_mnozen = (pesel[0] * 1) + (pesel[1] * 3) + (pesel[2] * 7) + (pesel[3] * 9) + (pesel[4] * 1) + (pesel[5] * 3) + (pesel[6] * 7) + (pesel[7] * 9) + (pesel[8] * 1) + (pesel[9] * 3) + (pesel[10] * 1);

		if (suma_mnozen % 10 == 0)
		{
			cout << "D" << endl;
		}
		else
		{
			cout << "N" << endl;
		}
	}
	return 0;
}