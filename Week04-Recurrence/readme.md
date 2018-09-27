#268B-Buttons

For this problem, we have to calculate the worst possibility that he has to guess all the keys to unlock. For code, it's very simple. First enter the key number (how many numbers in the key). After that, the code will calculate every possibility he finally gets the correct order (using the 'for' function). Then, print the results (worst possible).

    while(cin>>n)
    {
    int ans=n;
        for(int i=1;i<=n;i++)
        {

            ans+=i*(n-i);
 
        }
        
        
Complexity: O (n)

https://codeforces.com/contest/268/submission/43452451







#598D-Igor in the museum


for this problem, I have to count each painting on the wall of two adjacent cells: empty cells and cells that cannot be passed. for example in problem 1, for the code, we use multiple arrays for fields. First, we enter our line, column, and number of initial Igor positions. After that, we draw or enter fields with empty and inaccessible cells. Then, the code will distinguish char of (.) And (*).

     input
     5 6 3
     ******
     *..*.*
     ******
     *....*
     ******
      2 2
      2 5
      4 3
      
      output
      6
      4
      10
      
      
Complexity: O(nm)
      
      
https://codeforces.com/contest/598/submission/43490475
      
