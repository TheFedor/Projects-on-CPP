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
	vector<int> ist;
	vector<int> st;
	int prov = 0;
	for (int j = 0; j < n; j++)
	{
		prov = 0;
		for (int i = 0; i < n; i++)
		{
			if (v[i][j] == 1) {
				prov++;
			}
		}
		if (prov == 0) {
			ist.push_back(j + 1);
		}
	}
	for (int i = 0; i < n; i++)
	{
		prov = 0;
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 1) {
				prov++;
			}
		}
		if (prov == 0) {
			st.push_back(i+1);
		}
	}
	cout << ist.size() << "\n";
	for (int i = 0; i < ist.size(); i++)
	{
		cout << ist[i] << "\n";
	}
	cout << st.size() << "\n";
	for (int i = 0; i < st.size(); i++)
	{
		cout << st[i] << "\n";
	}
}