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
	int otv = 0;
	for (int i = 0; i < n; i++)
	{
		otv = 0;
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 1) {
				otv++;
			}
		}
		cout << otv << "\n";
	}
}