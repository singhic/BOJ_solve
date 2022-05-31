#include <iostream>
using namespace std;

int god(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int p, q;
	cin >> p >> q;
	int g = god(p, q);
	cout << g << '\n' << (p * q) / g << endl;
}