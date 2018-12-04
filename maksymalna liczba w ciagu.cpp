#include<iostream>
using namespace std;

int main()
{

	int max = 0;
	int wejscie;
	do
	{
		cin >> wejscie;

		if (wejscie > max)
		{
			max = wejscie;
		}
		else if (wejscie == 0)
		{
			cout << max;
		}
	} while (wejscie > 0);

	return 0;
}