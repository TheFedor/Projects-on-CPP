﻿#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(1);
	for (int i = 2; i <= n; i++)
	{
		v.push_back((v[i - 1] + v[i - 2])%10);
	}
	std::cout << v[n];
}