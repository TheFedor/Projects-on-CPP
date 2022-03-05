#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int vv = 0;
	int reb = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> vv;
			if (i != j) {
				if (vv == 1) {
					reb++;
				}
			}
		}
	}
	cout << reb << endl;
}
