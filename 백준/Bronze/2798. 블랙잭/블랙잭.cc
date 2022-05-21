#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, res = 0;
	int array[101] = {};
	cin >> n >> m;


	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (array[i] + array[j] + array[k] <= m && array[i] + array[j] + array[k] > res)
				{
					res = array[i] + array[j] + array[k];
				}
			}
		}
	}
	cout << res << endl;
}