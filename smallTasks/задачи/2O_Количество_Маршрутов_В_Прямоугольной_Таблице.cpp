#include <vector>
#include <iostream>

void dl(int a, int b, int n, int m, int &sch) {
	if (a + 1 <= n) {
		dl(a + 1, b, n, m, sch);
	}
	if (b + 1 <= m) {
		dl(a, b + 1, n, m, sch);
	}
	if (a == n && b == m) {
		sch++;
	}
}

int main()
{
	int n = 0;
	int m = 0;
	int sch = 0;
	std::cin >> n >> m;
	dl(0, 0, n - 1, m - 1, sch);
	std::cout << sch;
}