#include <iostream>
#include<vector>

int main()
{
	int n;
	std::cin>> n;
	std::vector <int> arr(n + 1);
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	std::cout<< arr[n];
}
