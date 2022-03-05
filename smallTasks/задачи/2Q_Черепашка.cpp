#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	cin >> n >> m;
	vector<vector<int>> v(n);
	int vv = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> vv;
			v[i].push_back(vv);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i > 0 && j > 0) {
				v[i][j] += max(v[i - 1][j], v[i][j - 1]);
			}
			else if (i == 0 && j > 0) {
				v[i][j] += v[i][j - 1];
			}
			else if (j == 0 && i > 0) {
				v[i][j] += v[i - 1][j];
			}
		}
	}
	cout << v[n - 1][m - 1] << endl;
}