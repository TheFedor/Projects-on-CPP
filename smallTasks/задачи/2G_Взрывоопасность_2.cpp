#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(n + 1);
	std::vector<int> v1;
	v[0] = 0;
	v1.push_back(0);
	v[1] = 3;
	v1.push_back(1);
	for (int i = 2; i < n + 1; i++)
	{
		v[i] = (v[i - 1] - v1[i - 1]) * 3 + v1[i - 1] * 2;
		v1.push_back(v[i - 1] - v1[i - 1]);
	}
	std::cout << v[n];
}