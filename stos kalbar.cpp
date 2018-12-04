#include <iostream>  ///stos zenek
#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
	int tab[10] = { 0 };
	int wsk = 0, liczba;
	char znak;
	while (scanf("%c\n", &znak) != EOF) {
		if (znak == '+') {
			scanf("%d\n", &liczba);
			if (wsk >= 0 && wsk <= 9) {
				tab[wsk] = liczba;
				++wsk;
				puts(":)");
			}
			else {
				puts(":(");
			}

		}
		else {
			if (wsk >= 1 && wsk <= 10) {
				--wsk;
				printf("%d\n", tab[wsk]);
			}
			else {
				puts(":(");
			}

		}
	}
	return 0;
}