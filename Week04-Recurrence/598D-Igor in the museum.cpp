#include <bits/stdc++.h>
using namespace std;

//declaring variable
char board[1000][1000]; //the real board
int boardVisited[1000][1000]={0}; //view board is visited or not
int ans[1000000]={0}; //will list answer
int paintingsViewed=0;
int keyCount=0;

void DFS(int x, int y, int n, int m){
//corner of board
    if(x>n||y>m)
return;
    if(x<0||y<0)
return;
//if the board is visited
    if(boardVisited[x][y]!=0)
return;
//if it is board add painting viewed
    if(board[x][y]=='*'){
    paintingsViewed++;
return;
}
//replace board visited with keycount
    boardVisited[x][y]=keyCount;
//recurrence for north,east,south,and west
    DFS(x-1,y, n, m);
    DFS(x+1,y, n, m);
    DFS(x,y-1, n, m);
    DFS(x,y+1, n, m);
return;
}

int main()
//declaring variables
{
int n,m,k,x,y;
//input n, m, and k
    cin>>n>>m>>k;
//input the board
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>board[i][j];
}
}
//count the answer for group
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    if(board[i][j]=='.'&&boardVisited[i][j]==0){
    keyCount++;//add keycount
    paintingsViewed=0;//redeclared paintingsviewed to 0
    DFS(i,j,n,m);//use the recursive function
    ans[keyCount]=paintingsViewed;//put ans to painting viewed
    }
        }
}
//loop test
for(int i=0; i<k; i++){
//insert x and y location of person
    cin>>x>>y;
//get the answer from board visited
cout<<ans[boardVisited[x-1][y-1]]<<endl;
}
return 0;
}
