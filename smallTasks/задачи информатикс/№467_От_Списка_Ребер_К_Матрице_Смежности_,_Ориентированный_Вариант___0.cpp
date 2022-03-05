#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	vector<vector<int>> v(n, vector<int>(n));
	vector<vector<int>> v1(m, vector<int>(2));
	for (int i = 0; i < m; i++)
	{
		cin >> v1[i][0] >> v1[i][1];
		v[v1[i][0] - 1][v1[i][1] - 1] = 1;
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