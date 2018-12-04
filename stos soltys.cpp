#include <iostream>
using namespace std;
int main()
{
	int tablica[10];
	int i = 0;
	char com;
	int x;
	while (cin >> com)
	{
		switch (com)
		{
		case '+':
			cin >> x;
			if (i >= 10)
				cout << ":(" << "\n";
			else
			{
				tablica[i++] = x;
				cout << ":)" << "\n";
			}
			break;
		case '-':
			if (i <= 0)
				cout << ":(" << "\n";
			else
				cout << tablica[--i] << "\n";
			break;
		}
	}
	return 0;
}