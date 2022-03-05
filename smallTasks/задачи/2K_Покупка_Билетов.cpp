#include <vector>
#include <iostream>

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(n + 1);
	std::vector<int> a(n);
	std::vector<int> b(n);
	std::vector<int> c(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i] >> b[i] >> c[i];
	}
	v[0] = 0;
	v[1] = a[0];
	if (n > 1) {
		v[2] = min(a[0] + a[1], b[0]);
	}
	int k = 0;
	for (int i = 3; i < n+1; i++)
	{
		k = min(v[i - 1] + a[i - 1], v[i - 2] + b[i - 2]);
		v[i] = min(k, v[i - 3] + c[i - 3]);
	}
	std::cout << v[n];
}
