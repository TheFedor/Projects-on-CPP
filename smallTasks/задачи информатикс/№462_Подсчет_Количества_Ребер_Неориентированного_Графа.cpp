#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			v[i].push_back(0);
			cin >> v[i][j];
		}
	}
	int reb = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (v[i][j] == 1) {
				reb++;
			}
		}
	}
	cout << reb << endl;
}
