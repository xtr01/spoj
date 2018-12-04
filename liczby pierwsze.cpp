    #include<iostream>
    #include<cstdlib>
    using namespace std;
     
    bool czy_pierwsza(int n)
    {
    	if (n<2)
    		return false;                       //gdy liczba jest mniejsza nia 2 to nie jest pierwszÄ
     
    	for (int i = 2; i*i <= n; i++)
    		if (n%i == 0)
    			return false;                   //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
    	return true;
    }
     
    int main()
    {
    	int b;
    	cin >> b;
     
    	int n;
     
    	for (int a = 1; a <= b; a++)
    	{
    		cin >> n;
     
    		if (czy_pierwsza(n))                    //lub czy_pierwsza(n)==1
    			cout << "TAK" << endl;
    		else
    			cout << "NIE" << endl;
    	}
    	
    	return 0;
    } 