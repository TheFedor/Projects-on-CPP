#include <vector>
#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[j] < v[i]) {
				int zam = v[j];
				v[j] = v[i];
				v[i] = zam;
			}
		}
	}
	int s = 0;
	cin >> s;
	if (s > v[0]) {
		vector<vector<int>> v1(s + 1);
		for (int i = 0; i < n; i++)
		{
			if (v[i] <= s) {
				v1[v[i]].push_back(v[i]);
			}
		}
		for (int i = v[0] + 1; i < s + 1; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i - v[j] > 0) {
					if (v1[i - v[j]].size() > 0) {
						if (v1[i].size() > v1[i - v[j]].size() + 1 || v1[i].size() < 1) {
							v1[i] = v1[i - v[j]];
							v1[i].push_back(v[j]);
						}
					}
				}
			}
		}
		int prov = 0;
		if (v1[s].size() > 0) {
			for (int i = 0; i < v1[s].size(); i++)
			{
				prov += v1[s][i];
			}
		}
		if (prov == s) {
			for (int i = 0; i < v1[s].size() - 1; i++)
			{
				for (int j = i + 1; j < v1[s].size(); j++)
				{
					if (v1[s][j] < v1[s][i]) {
						int zam = v1[s][j];
						v1[s][j] = v1[s][i];
						v1[s][i] = zam;
					}
				}
			}
			cout << v1[s].size() << "\n";
			for (int i = 0; i < v1[s].size(); i++)
			{
				cout << v1[s][i] << " ";
			}
		}
		else {
			cout << -1;
		}
	}
	else if (s == v[0]) {
		cout << 1 << "\n";
		cout << v[0];
	}
	else if (s < v[0]) {
		cout << -1;
	}
}
