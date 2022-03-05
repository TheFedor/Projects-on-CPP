#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}
	bool pr = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int p = 0; p < n; p++)
			{
				if (v[i][j] == 1) {
					if (v[j][p] == 1) {
						if (v[i][p] != 1) {
							pr = false;
							p = n;
							i = n;
							j = n;
						}
					}
				}
			}
		}
	}
	if (pr) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}