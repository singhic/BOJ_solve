#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;

	if (year >= 1000 && year <= 3000)
	{
		cout << year - 543 << endl;
	}
	return 0;
}