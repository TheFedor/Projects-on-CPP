#include <vector>
#include <iostream>

int main()
{
	//v[i][j] i -строки сверху-вниз j - столбцы слева - направо
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	std::vector<std::vector<int>> v(n + 4);
	for (int i = 0; i < n + 4; i++)
	{
		for (int j = 0; j < m + 4; j++)
		{
			v[i].push_back(0);
		}
	}
	v[2][2] = 1;
	for (int i = 2; i < n + 2; i++)
	{
		for (int j = 2; j < m + 2; j++)
		{
			if ((i - 2 > 1) && (j - 1 > 1)) {
				v[i][j] = v[i][j] + v[i - 2][j - 1];
			}
			if ((i - 1 > 1) && (j - 2 > 1)) {
				v[i][j] = v[i][j] + v[i - 1][j - 2];
			}
		}
	}
	std::cout << v[n + 1][m + 1];
}
