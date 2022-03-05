#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	vector<vector<int>> v1(m);
	for (int i = 0; i < m; i++)
	{
		v1[i].push_back(0);
		v1[i].push_back(0);
		cin >> v1[i][0] >> v1[i][1];
	}
	vector<vector<int>> v(n);
	int qre = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			qre = 0;
			v[i].push_back(0);
			for (int p = 0; p < m; p++)
			{
				if (v1[p][0] - 1 == i && v1[p][1] - 1 == j) {
					qre++;
				}
				if (v1[p][0] - 1 == j && v1[p][1] - 1 == i) {
					qre++;
				}
			}
			if (qre > 0) {
				v[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}
