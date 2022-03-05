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
	bool p = false;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i+1; j < m; j++)
		{
			if (v[i][0] == v[j][0] && v[i][1] == v[j][1]) {
				p = true;
				i = m;
				j = m;
			}
		}
	}
	if (p) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
