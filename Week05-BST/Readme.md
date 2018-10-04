# 115A - Party

To solve this problem, we first enter the number of employees (n). After that, we enter the number and save it in an array. Using complex functions, we can find the optimal number of groups based on input (vis). In the end, print input and code will stop.

    int n, tmp;
    cin >> n;
    g.resize(n);
    memset(vis, false, sizeof vis);

    for(int i = 0; i < n; i++) {
        cin >> tmp;

        if(tmp == -1) {
            q.push(i);
            vis[i] = true;
        } else {
            tmp--;
            g[i].push_back(tmp);
            g[tmp].push_back(i);
        }
    }

    cout << BFS() << endl;


Complexity: O(n^2)

    
    
# 4C - Registration system

For this problem, we are going to notice which username is new and which username is already taken from the database. For example, I, as a new user, want to register. So, I put my username as “lala” and it is accepted in the database. However, there is also another lala from another country who wants to register as well. As the system must differentiate two lala, the second user with the name lala has his username added “1” in the end, so it becomes “lala1”. If there is another person who wants to create another account with lala again, it will be named “lala2”, and so on. However, if the username is not lala, lili for example, it will be accepted as a new user. For the code, we first enter the number of user (n) we want to register. Then, we input the user one by one. If the user has the same name, it will be added a number (a). In the end, the code will notice which one is new and which one is already used and print the said username (that’s stored within an array).


      cin >> s;
       
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
            
            
 Complexity: O(n log n)
                
                
                
            
# 913B - Christmas spruce

for this problem, We want to know if the tree is a spruce or not. It is a spruce if its every non-leaf vertex has at least 3 leaf children. If it don’t have, then screw it, it’s not a spruce. It’s pretty much self-explanatory, if you understand tree diagram (If I am not mistaken, we do learn tree in Data Structure with Brother Hudi and Mr. Frans, I might be wrong though). For the code, we have a two arrays in the beginning: Array for the tree and array for the leaf. For some reason, if I put the array in the main, the code will work, but it will print blank, unable to put any input. Either my computer is a potato or somehow I mess the C++ algorithm completely and make it dizzy. We first input the amount of vertices in our tree . Then, we input the branching root. After that, the code will tell us if the tree is a spruce or not using a complex algorithm function. In the end, the code will print ‘YES’ if it is a spruce and ‘NO’ otherwise.


    scanf("%d", &n);
	g.resize(n);

	for(int i = 1, tmp; i < n; ++i) {
		scanf("%d", &tmp);
		g[--tmp].push_back(i);
	}

	for(int i = 0, cnt; i < n; ++i) {
		cnt = 0;
		if(g[i].empty())
			continue;
		for(int j = 0; j < g[i].size(); ++j)
			if(g[g[i][j]].empty())
				++cnt;
		if(cnt < 3) {
			puts("No");
      
      
      
  Complexity: O(n)
