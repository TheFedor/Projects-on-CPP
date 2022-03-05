#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0; cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	int sum = 0;
	int otv = num[0];
	int left = 0;
	int right = 0;
	int pos = -1;
	for (int i = 0; i < n; i++)
	{
		sum += num[i];
		if (sum > otv) {
			otv = sum;
			right = i;
			left = pos + 1;
		}
		if (sum < 0) {
			sum = 0;
			pos = i;
		}
	}
	cout << left + 1 << " " << right + 1 << " " << otv;
}