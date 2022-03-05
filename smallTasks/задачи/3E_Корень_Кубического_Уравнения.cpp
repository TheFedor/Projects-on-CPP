#include <vector>
#include <iostream>
using namespace std;

double f(int a, int b, int c, int d, double r) {
	return (a * r * r * r) + (b * r * r) + (c * r) + d;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;

	//находим интервал, где функция обращается в нуль
	double r = 1;
	while ( f(a,b,c,d,r) * f(a,b,c,d,-r) >= 0 ) {
		r *= 2;
	}
	r = r + 1;
	double l = -1 * r;
	double sred = 0;
	while (r - l > 0.0000001) {
		sred = (l + r) / 2;
		if (f(a, b, c, d, sred) * f(a, b, c, d, r) > 0) {
			r = sred;
		}
		else {
			l = sred;
		}
	}
	cout << (r + l) / 2;
}
