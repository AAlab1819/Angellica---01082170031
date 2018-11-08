#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int p[1005], w[1005];
int dp[1005];

int main() {
	int T, n, m;
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			scanf("%d%d", &p[i], &w[i]);
		}
		int ans = 0;
		scanf("%d", &m);
		while(m--) {
			int bag;
			scanf("%d", &bag);
			memset(dp, 0, sizeof(dp));
			for(int j = 0; j < n; j++) {
				for(int i = bag; i >= w[j]; i--) {
					dp[i] = max(dp[i], dp[i-w[j]] + p[j]);
				}
			}
			//printf("%d\n", dp[bag]);
			ans += dp[bag];
		}
		printf("%d\n", ans);
	}
	return 0;
}
