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
	vector<vector<int>> otv(n, vector<int>(2));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 1) {
				otv[i][1]++;
				otv[j][0]++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << otv[i][0] << "\n";
		cout << otv[i][1] << "\n";
	}
}