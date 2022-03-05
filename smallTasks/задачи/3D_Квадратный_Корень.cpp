#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	unsigned long long n = 0;
	unsigned long long min = 0;
	unsigned long long max = 0;
	unsigned long long otv = 0;
	unsigned long long sred = 0;
	while (cin >> n) {
		min = 0;
		max = 4294967296;
		while (true) {
			sred = (min + max) / 2;
			if (min * min == n) {
				otv = min;
				break;
			}
			if (max * max == n) {
				otv = max;
				break;
			}
			if (sred * sred > n) {
				max = sred;
			}
			else if (sred * sred <= n) {
				min = sred;
			}
			if (min + 1 == max) {
				otv = min;
				break;
			}
		}
		cout << otv << "\n";
	}
}
