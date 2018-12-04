#include <iostream>
using namespace std;

#define MOD 1000000007;
long long int a, b, c, d;

void szybki_fib(long long int e, long long int ni[])
{
	if (e == 0)
	{
		ni[0] = 0;
		ni[1] = 1;
		return;
	}
	szybki_fib((e / 2), ni);
	a = ni[0];
	b = ni[1];
	c = 2 * b - a;
	if (c < 0)
		c += MOD;
	c = (a * c) % MOD;
	d = (a*a + b * b) % MOD;
	if (e % 2 == 0)
	{
		ni[0] = c;
		ni[1] = d;
	}
	else
	{
		ni[0] = d;
		ni[1] = c + d;
	}
}

int main()
{
	long long int n;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		long long int e;
		cin >> e;
		long long int ni[2] = { 0 };
		szybki_fib(e, ni);
		cout << ni[0] << endl;
	}
	system("pause");
	return 0;

}