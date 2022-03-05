#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int ok = 0;
	int vv = 0;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> vv;
			if (i == j) {
				if (vv == 1) {
					ok++;
				}
			}
		}
	}
	if (ok > 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}