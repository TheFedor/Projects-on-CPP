#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<int> v(n + 150);
	v[0] = 1;
	v[1] = 1;
	for (int i = 2; i < n; i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
	cout << v[n - 1];
}

