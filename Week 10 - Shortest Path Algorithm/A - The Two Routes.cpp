#include <bits/stdc++.h>

bool E[401][401];
int D[401];
int main() {
  int n,m;std::cin>>n>>m;
  for(int a,b;std::cin>>a>>b;E[a][b]=E[b][a]=1);
  for(int i=1;i<=n;++i)D[i]=i==1?0:n;
  for(int d=1;d<n;++d)
    for(int i=1;i<=n;++i)if(D[i]==d-1)
      for(int j=1;j<=n;++j)
        if(i!=j&&E[i][j]!=E[1][n]&&D[j]>d)D[j]=d;
  std::cout<<(D[n]<n?D[n]:-1)<<'\n';
}
