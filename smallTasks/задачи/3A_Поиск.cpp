#include <iostream>  
#include <vector>
using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	vector<int> ni(n);
	vector<int> ki(k);
	for (int i = 0; i < n; i++)
	{
		cin >> ni[i];
	}
	for (int i = 0; i < k; i++)
	{
		cin >> ki[i];
	}
	int min = 0;
	int max = 0;
	int sred = 0;
	for (int i = 0; i < k; i++)
	{
		min = 0;
		max = n;
		if (ki[i] > ni[ni.size() - 1]) {
			cout << "NO" << "\n";
		}
		else {
			while (true) {
				sred = (min + max) / 2;
				if (ni[sred] >= ki[i]) {
					max = sred;
				}
				else {
					min = sred;
				}
				if (ni[max] == ki[i] || ni[min] == ki[i]) {
					cout << "YES" << "\n";
					break;
				}
				if (min + 1 == max) {
					cout << "NO" << "\n";
					break;
				}
			}
		}
	}
}
