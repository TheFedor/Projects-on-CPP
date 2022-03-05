#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(n+2);
	v[0] = 1;
	v[1] = 1;
	for (int i = 2; i < n+1; i++)
	{
		if (i % 2 == 0) {
			v[i] = v[i / 2] + 1;
		}
		else {
			v[i + 1] = v[(i + 1) / 2] + 1;
			v[i] = v[i + 1] + v[(i - 1) / 2];
		}
	}
	std::cout << v[n];
}
