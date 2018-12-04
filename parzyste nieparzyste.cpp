#include<iostream>
using namespace std;

int main()
{
	int a;

	cin >> a;

	for (int i = 0; i<a; i++)
	{
		int b;
		cin >> b;
		int *tablica = new int[b];

		for (int j = 0; j<b; j++)
		{
			cin >> tablica[j];
		}
		for (int k = 1; k<b; k++)
		{
			cout << tablica[k] << " ";
			k++;
		}
		for (int l = 0; l<b; l++)
		{
			cout << tablica[l] << " ";
			l++;
		}

		cout << endl;
		delete[] tablica;
	}
	return 0;
}