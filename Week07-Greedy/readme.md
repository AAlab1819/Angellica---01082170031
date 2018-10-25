# 946A Partition


for this problem 946A Partition is to find the optimal way to partition an array into 2 partition, partition B and partition C, to get the maximum possible value when subtracting sum of B and sum of C. The solution to such problem can be easily found by checking every number if it is greater than or less than 0. This is because the maximum value will be attained by adding all positive numbers and subtracting all negative numbers, subtracting a negative number results in a positive sum.

In the code, we first input the number of the set n or a. Then, we input the data set (x). From there, the code will determine the group. Using the function “if (x>0)” we can see that it is group B, else it is group C. In group B, the code adds the number as usual; in group C, we minus the number, so it will become positive in the end. The total of sum (sum) will be printed in the end.

    for(int i=0; i<number; i++)
    {
    	if(team[i]%2==1)
    	{
    	    if(team[i+1]==0||i==number-1)
    	    {
    	        cout<<"NO"<<endl;

Worst Time Complexity: O(n)


# 978B File Name


for this problem 978B File Name is to find the number of "X" to be deleted so that there is no occurance of "xxx" in a given string. This is done by iterating through the string, then incrementing a counter if "X" is found and reseting the counter to 0 if non "X" is found. After every iteration if the x counter is greater than or equal to 3, then the X to be deleted counter is incremented and x counter is decremented.

In the code, we first enter the amount of letter in the filename, and then input the name of the file. After that, the code will check the string using an array for possible three ‘x’s using ‘for’ and ‘if’ function. If they found three ‘x’s in the file name, then the output is added (ans++). In the end of the ‘for’ function, we then print the total possible x (ans).

    while((filename.length()>=3)&&(filename.find("xxx")!=-1))
    {
        index = filename.find("xxx");
        filename.erase(index, 1);
    }
    cout<<number-filename.length()<<endl;

Worst Time Complexity: O(n)


# 731B Coupons and Discount


for this problem 731B Coupon and Discount is to find if it is possible to buy pizzas using only discount and coupons given n days and n teams each day. Discounts are used to buy 2 pizzas in a day, and coupons are used to buy 1 pizza in 2 consecutive days. The number of discounts and coupons that can be used each days is unlimited. The solution to this problem can be found by iterating through the days and checking whether the number of teams that day is odd Optimally, all pizzas in a day will be bought using discounts, unless the teams is odd which then a coupon will be used. If a coupon is used in the previous day then a pizza will be subtracted from today. If at any point there is an odd number of teams and no pizza is needed the next day then it is impossible to buy pizzas using only discount and coupons.

     for(int i=0; i<number; i++)
    {
        cin >> seqA;
        if(seqA >= 0) seqB += seqA;
        else seqC += seqA;
    }
    cout<<seqB-seqC<<endl;

Worst Time Complexity: O(n^2)
