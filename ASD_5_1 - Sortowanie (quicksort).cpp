#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

void quick_sort(int *tab, int lewy, int prawy)
{
	if (prawy <= lewy) return;

	int i = lewy - 1, j = prawy + 1,
		pivot = tab[(lewy + prawy) / 2]; //wybieramy punkt odniesienia

	while (1)
	{
		//szukam elementu wiekszego lub rownego piwot stojacego
		//po prawej stronie wartosci pivot
		while (pivot>tab[++i]);

		//szukam elementu mniejszego lub rownego pivot stojacego
		//po lewej stronie wartosci pivot
		while (pivot<tab[--j]);

		//jesli liczniki sie nie minely to zamie� elementy ze soba
		//stojace po niewlasciwej stronie elementu pivot
		if (i <= j)
			//funkcja swap zamienia wartosciami tab[i] z tab[j]
			swap(tab[i], tab[j]);
		else
			break;
	}

	if (j > lewy)
		quick_sort(tab, lewy, j);
	if (i < prawy)
		quick_sort(tab, i, prawy);
}

int main()
{

    int tablica[100000];
    int wartosc, pozycja =0;
    
    while(cin >> wartosc)
    {
        tablica[pozycja] = wartosc;
        pozycja++;
    }
    
    quick_sort(tablica, 0, pozycja-1); 
    
    for(int i=0; i<pozycja; i++)
    {
        cout << tablica[i] << endl;
    }

}