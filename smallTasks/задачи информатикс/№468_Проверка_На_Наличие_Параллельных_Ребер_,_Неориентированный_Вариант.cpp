#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	vector<vector<int>> v1 (m, vector<int>(2));
	for (int i = 0; i < m; i++)
	{
		cin >> v1[i][0] >> v1[i][1];
	}
	bool prov = false;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (v1[i][0] == v1[j][0] && v1[i][1] == v1[j][1]) {
				prov = true;
				j = m + 1;
				i = m + 1;
			}
		}
	}
	if (prov) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}