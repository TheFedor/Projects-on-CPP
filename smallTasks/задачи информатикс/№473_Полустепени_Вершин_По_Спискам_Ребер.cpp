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
	vector<vector<int>> otv(n+1, vector<int>(2));
	for (int i = 0; i < m; i++)
	{
		otv[v[i][0]][1]++;
		otv[v[i][1]][0]++;
	}
	for (int i = 1; i < n+1; i++)
	{
		cout << otv[i][0] << "\n";
		cout << otv[i][1] << "\n";
	}
}