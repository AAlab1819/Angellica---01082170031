#include <stdio.h>
#include <string.h>

const int coin[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
double value;
long long d[30005];
int i, j;

int main() {
	d[0] = 1;
	for (i = 0; i < 11; i ++)
		for (j = coin[i]; j <= 30000; j ++) {
			d[j] = d[j] + d[j - coin[i]];
		}
		while (~scanf("%lf", &value) && value) {
			printf("%6.2lf%17lld\n", value, d[int(value * 100 + 0.5)]);
		}
		return 0;
}
