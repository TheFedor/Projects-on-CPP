#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<vector<int>> v(n);
	vector<vector<int>> v1(n*n+1);
	int sch = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			v[i].push_back(0);
			cin >> v[i][j];
			if (v[i][j] > 0) {
				v1[sch].push_back(i+1);
				v1[sch].push_back(j+1);		
				sch++;
			}
		}
	}
	for (int i = 0; i < sch; i++)
	{
		cout << v1[i][0] << " " << v1[i][1] << "\n";
	}
}