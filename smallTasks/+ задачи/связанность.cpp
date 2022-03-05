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
	vector<int> gorkuda;
	vector<int> prov(n);
	prov[0] = 1;
	for (int i = 1; i < n; i++)
	{
		if (v[0][i] == 1) {
			gorkuda.push_back(i);
			prov[i] = 1;
		}
	}
	int nin = 0;
	if (gorkuda.size() > 0) {
		while (true) {
			nin = 0;
			nin = gorkuda[gorkuda.size() - 1];
			gorkuda.pop_back();
			for (int i = 0; i < n; i++)
			{
				if (v[nin][i] == 1 && prov[i] == 0) {
					gorkuda.push_back(i);
					prov[i] = 1;
				}
			}
			if (gorkuda.size() == 0) {
				break;
			}
		}
		int itog = 0;
		for (int i = 0; i < n; i++)
		{
			itog += prov[i];
		}
		if (itog == n) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else {
		cout << "NO";
	}
}

