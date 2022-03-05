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
	for (int i = 0; i < n; i++)
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
	double sum = 0;
	bool prov = true;
	int sch = 0;
	int zam = 0;
	while (true) {
		if (v.size() == 1) {
			break;
		}
		v[0] = v[0] + v[1];
		zam = v[0];
		sum += v[0] * 0.05;
		for (int i = 0; i < v.size() - 2; i++)
		{
			v[i] = v[i + 2];
		}
		v.pop_back();
		v.pop_back();
		sch = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > zam) {
				sch = i;
				i = v.size() + 1;
			}
			if (i == v.size() - 1) {
				sch = v.size();
			}
		}
		v.push_back(0);
		for (int i = v.size() - 1; i > sch; i--)
		{
			v[i] = v[i - 1];
		}
		v[sch] = zam;
	}
	printf("%.2f\n", sum);
}