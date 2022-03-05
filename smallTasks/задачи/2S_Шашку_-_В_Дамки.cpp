##include <iostream>
#include <vector>

int main()
{
	int a = 0; // номер столбца i
	int b = 0; // номер строки j
	//v[i][j] i -- номер столбца j - номер строки сверху-вниз
	std::cin >> a >> b;
	std::vector<std::vector<int>> v(10);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			v[i].push_back(0);
		}
	}
	v[a][b] = 1;
	for (int i = b + 1; i < 9; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			if (v[j][i - 1] > 0) {
				if (j + 1 < 9) {
					v[j + 1][i] = v[j + 1][i] + v[j][i - 1];
				}
				if (j - 1 > 0) {
					v[j - 1][i] = v[j - 1][i] + v[j][i - 1];
				}
			}
		}
	}
	int sch = 0;
	for (int i = 0; i <= 9; i++)
	{
		sch += v[i][8];
	}
	std::cout << sch;
}
