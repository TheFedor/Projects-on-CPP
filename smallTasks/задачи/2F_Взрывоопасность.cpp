#include <iostream>
#include <vector>


int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(21);
	v[1] = 2;
	v[2] = 3;
	for (int i = 3; i <= n; i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
	std::cout << v[n] << std::endl;
}
