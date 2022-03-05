#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	vector<vector<int>> v(m+1, vector<int>(2));
	for (int i = 0; i < m; i++)
	{
		cin >> v[i][0] >> v[i][1];
	}
	//YES если все вершины имеют одинаковую степень
	vector<int> step(n);
	for (int i = 0; i < m; i++)
	{
		step[v[i][0]-1]++;
		step[v[i][1]-1]++;
	}
	bool p = true;
	for (int i = 0; i < n-1; i++)
	{
		if (step[i] != step[i + 1]) {
			p = false;
		}
	}
	if (p) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}