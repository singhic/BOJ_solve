#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() < b.length())
	{
		return 1;
	}
	else if (b.length() < a.length())
	{
		return 0;
	}
	else
	{
		return a < b;
	}
}

int main()
{
	int n;
	cin >> n;
	string tmp;
	string* s = new string[n];

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n, compare);
	for (int i = 0; i < n; i++)
	{
		if (i > 0 && s[i] == s[i - 1])
		{
			continue;
		}
		cout << s[i] << endl;
	}
	delete[] s;
	return 0;
}