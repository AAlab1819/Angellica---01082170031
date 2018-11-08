# SuperSale



The first case is whether the item weight or max sack weight is 0, so we will enter 0. The second case is if the weight of the current item is less than the current maximum weight, then we will find the maximum value between the elements above. or the current price + the optimal price of the remaining weight. The third case is if the weight of the current item is greater than the max weight, then immediately take the value of the element above. Because there is a lot of maximum weight in terms of each family member, we take the value at (maximum family member weight, index the last item), and add everything together, but because I'm lazy so I just repeat the DP Process for each family member and his AC.


    scanf("%d", &bag);
			memset(dp, 0, sizeof(dp));
			for(int j = 0; j < n; j++) {
				for(int i = bag; i >= w[j]; i--) {
					dp[i] = max(dp[i], dp[i-w[j]] + p[j]);
				}
			}
			//printf("%d\n", dp[bag]);
			ans += dp[bag];
		
    
 # Dollars
 
 
Input will consist of a series of real numbers no greater than $300.00 each on a separate line. Each
amount will be valid, that is will be a multiple of 5c. The file will be terminated by a line containing
zero (0.00).

Output will consist of a line for each of the amounts in the input, each line consisting of the amount
of money (with two decimal places and right justified in a field of width 6), followed by the number of
ways in which that amount may be made up, right justified in a field of width 17


    d[0] = 1;
	for (i = 0; i < 11; i ++)
		for (j = coin[i]; j <= 30000; j ++) {
			d[j] = d[j] + d[j - coin[i]];
		}
		while (~scanf("%lf", &value) && value) {
			printf("%6.2lf%17lld\n", value, d[int(value * 100 + 0.5)]);
