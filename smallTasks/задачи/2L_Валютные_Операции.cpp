#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	double sum = 100;
	vector<vector<double>> v(n);
	for (int i = 0; i < n; i++)
	{
		v[i].push_back(0);
		v[i].push_back(0);
		cin >> v[i][0] >> v[i][1];
	}
	double ce1 = 0;
	double ce2 = 0;
	for (int i = 0; i < n - 1; i++)
	{
		ce1 = 0;
		ce2 = 0;
		ce1 = (sum / v[i][0]) * v[i+1][0];
		ce2 = (sum / v[i][1]) * v[i + 1][1];
		if (ce1 > sum) sum = ce1;
		if (ce2 > sum) sum = ce2;
	}
	printf("%.2f", sum);
}
