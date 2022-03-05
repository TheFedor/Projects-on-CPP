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
	vector<int> otv(n+1);
	for (int i = 0; i < m; i++)
	{
		otv[v[i][0]]++;
		otv[v[i][1]]++;
	}
	for (int i = 1; i < n + 1; i++)
	{
		cout << otv[i] << "\n";
	}
}