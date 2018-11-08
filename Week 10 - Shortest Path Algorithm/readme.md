# C. Dijkstra?


The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.
It is possible that the graph has loops and multiple edges between pair of vertices.
Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.



    while (m--)
    {
	cin>>a>>b>>w;
	v[a].push_back(b);
	v[b].push_back(a);
	mp[{a,b}]=w;
	mp[{b,a}]=w;
    }

    for (i=2; i<=n; i++)
    d[i]=1e18;
    q.push(1);

    while (q.size())
    {
	k=q.top();
	q.pop();
    for (i=0; i<v[k].size(); i++)
	{
		z=v[k][i];
		w=mp[{k,z}];
		if (d[k]+w<d[z]) d[z]=d[k]+w,p[z]=k,q.push(z);
   
   
   
# A. The Two Routes


The first line of the input contains two integers n and m (2 ≤ n ≤ 400, 0 ≤ m ≤ n(n - 1) / 2) — the number of towns and the number of railways respectively.
Each of the next m lines contains two integers u and v, denoting a railway between towns u and v (1 ≤ u, v ≤ n, u ≠ v)
You may assume that there is at most one railway connecting any two towns.
Output one integer — the smallest possible time of the later vehicle's arrival in town n. If it's impossible for at least one of the vehicles to reach town n, output  - 1.


    for(int a,b;std::cin>>a>>b;E[a][b]=E[b][a]=1);
    for(int i=1;i<=n;++i)D[i]=i==1?0:n;
      for(int d=1;d<n;++d)
    for(int i=1;i<=n;++i)if(D[i]==d-1)
      for(int j=1;j<=n;++j)
        if(i!=j&&E[i][j]!=E[1][n]&&D[j]>d)D[j]=d;
     std::cout<<(D[n]<n?D[n]:-1)<<'\n';
