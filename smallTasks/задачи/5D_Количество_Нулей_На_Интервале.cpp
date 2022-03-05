#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a[100000], b[320], i, j = -1, k, m, n, L, R, z, p, q;
	scanf("%d", &n);k = sqrt(n);
	for (i = 0;i < n;++i) {
		scanf("%d", &a[i]);
		if (i % k == 0) { j++;b[j] = 0; }
		if (a[i] == 0)b[j]++;
	}
	scanf("%d", &m);
	while (m) {
		m--;z = 0;
		scanf("%d%d", &L, &R);L--;R--;p = L / k;q = R / k;
		if (p == q) { for (i = L;i <= R;++i)if (a[i] == 0)z++; }
		else {
			for (i = L;i < (p + 1) * k;++i)if (a[i] == 0)z++;
			for (j = p + 1;j < q;++j)z += b[j];
			for (i = q * k;i <= R;++i)if (a[i] == 0)z++;
		}
		printf("%d ", z);
	}
	return 0;
}