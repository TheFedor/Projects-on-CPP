#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	cin >> n >> m;
	vector<vector<int>> v(n + 1);
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m+1; j++)
		{
			v[i].push_back(0);
		}
	}
	vector<vector<int>> v1;
	v1 = v;
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < m+1; j++)
		{
			cin >> v[i][j];
		}
	}
	v1[1][0] = 1;
	v[1][0] = 1;
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < m+1; j++)
		{
			v1[i][j] = v1[i - 1][j] * v[i - 1][j] + v1[i][j - 1] * v[i][j - 1];
		}
	}
	if (v1[n][m] == 0) {
		cout << "Impossible"<<endl;
	}
	else {
		cout << v1[n][m]<<endl;
	}
}
