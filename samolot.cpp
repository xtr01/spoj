#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int a;
	int i = 1;
	int *tab = new int[i];
	do {
		cin >> a;
		tab[i] = a;
		i++;
	} while (a = 0);
	int naj = 0;
	for (int j = 1; j <= i; j++) {
		if (naj <= tab[j])
			naj = tab[j];
	}
	cout << naj;
}