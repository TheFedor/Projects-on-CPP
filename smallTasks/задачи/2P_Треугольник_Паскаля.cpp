#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<std::vector<int>> v(30);
	v[0].push_back(1);
	v[1].push_back(1);
	v[1].push_back(1);
	v[2].push_back(1);
	v[2].push_back(2);
	v[2].push_back(1);
	for (int i = 3; i < n; i++)
	{
		v[i].push_back(1);
		for (int j = 0; j < size(v[i-1])-1; j++)
		{
			v[i].push_back(v[i - 1][j] + v[i - 1][j + 1]);
		}
		v[i].push_back(1);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < size(v[i]); j++)
		{
			std::cout << v[i][j] << " ";
		}
		std::cout << "\n";
	}
}
