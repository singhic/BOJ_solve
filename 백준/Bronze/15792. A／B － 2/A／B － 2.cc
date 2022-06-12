#include <iostream>
using namespace std;

int main()
{
	int fir, sec;
	cin >> fir >> sec;

	cout << fir / sec << ".";
	fir = fir % sec;
	for (int i = 0;i <= 1000; i++)
	{
		fir *= 10;
		cout << fir / sec;
		fir = fir - (fir / sec) * sec;
	}
}