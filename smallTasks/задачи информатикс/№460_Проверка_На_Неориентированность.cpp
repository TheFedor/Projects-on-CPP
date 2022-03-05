#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int oh = 0;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			v[i].push_back(0);
			cin >> v[i][j];
			if (i == j) {
				if (v[i][j] == 1) {
					oh++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] != v[j][i]) {
				oh++;
			}
		}
	}
	if (oh == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
