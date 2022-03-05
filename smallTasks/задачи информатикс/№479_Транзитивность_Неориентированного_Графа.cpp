#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	vector<vector<int>> v(m, vector<int>(2));
	for (int i = 0; i < m; i++)
	{
		cin >> v[i][0] >> v[i][1];
	}
	vector<vector<int>> matr(n, vector<int>(n));
	for (int i = 0; i < m; i++)
	{
		matr[v[i][0] - 1][v[i][1] - 1] = 1;
		matr[v[i][1] - 1][v[i][0] - 1] = 1;
	}
	bool pr = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int p = 0; p < n; p++)
			{
				if (matr[i][j] == 1) {
					if (matr[j][p] != matr[i][p]) {
						if (p != i && p!= j) {
							pr = false;
							p = n;
							j = n;
							i = n;
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