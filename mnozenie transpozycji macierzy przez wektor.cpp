#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int wiersze, kolumny;
    
    cin >> kolumny >> wiersze;
    
    double **tablica; 
    double **transponowana;
    
    tablica = new double *[wiersze];

    for(int i=0; i < wiersze; i++)
    {
        tablica[i] = new double[kolumny+1];
        
        for(int j=0;j<=kolumny;j++)
        {
            cin >> tablica[i][j];
        }
    }
    /////////////////////////////////////////////////////////
    transponowana = new double *[kolumny];
    
    for(int i=0; i <kolumny; i++)
    {
        transponowana[i]= new double[wiersze];
        
        for(int j=0; j<wiersze;j++)
        {
            transponowana[i][j]=tablica[j][i];
        }
    }
    double wynik;
    cout.precision(15);
    
    for(int i=0; i<kolumny;i++)
    {
     wynik = 0;
        
        for(int j=0;j<wiersze;j++)
        {
            wynik += transponowana[i][j] * tablica[j][kolumny];
        }
        cout << wynik << " ";
    }
    
 /*   /////////////////////////////////////////////////////////
    for(int i = 0; i<wiersze; i++)      //wypisanie tablicy
    {
        for(int j=0; j<=kolumny;j++)
        {
            cout << tablica[i][j] << " ";
        }
        
        cout << endl;
    }
    
    cout << endl << "transponowana" << endl;
    
    for(int i=0; i<kolumny;i++)
    {
        for(int j=0;j<wiersze;j++)
        {
            cout << transponowana[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << wynik;
 */   
    for(int i =0; i<wiersze;i++)        //usuniecie tablic
    {
        delete [] tablica[i];
    }
    
    delete [] tablica;
    
    
    return 0;
}