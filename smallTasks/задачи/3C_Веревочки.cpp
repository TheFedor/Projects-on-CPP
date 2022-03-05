#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	vector<int> v(n);
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] > max && v[i] != 0) {
			max = v[i];
		}
	}
	int ku = 0;
	int otv = 0;
	int vi = 0;
	while (max >= 1) {
		ku = 0;
		for (int i = 0; i < n; i++)
		{
			vi = v[i];
			while (vi >= max) {
				vi -= max;
				ku++;
			}
		}
		if (ku >= k) {
			otv = max;
			break;
		}
		max -= 1000;
	}
	for (int j = max + 1001; j >= max; j--)
	{
		if (j >= 1) {
			ku = 0;
			for (int i = 0; i < n; i++)
			{
				vi = v[i];
				while (vi >= j) {
					vi -= j;
					ku++;
				}
			}
			if (ku >= k) {
				otv = j;
				break;
			}
		}
		else {
			break;
		}
	}
	cout << otv;
}
