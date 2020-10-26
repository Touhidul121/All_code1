#include<bits/stdc++.h>
using namespace std;
bool vis[21][21];
char grid[21][21];
int n,m,cnt;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==1|| grid[i][j]=='#')
        return false;
    else
        return true;
}

void dfs(int x,int y)
{
    vis[x][y]=1;

    if(isValid(x-1,y)){
            cnt++;
        dfs(x-1,y);
    }
    if(isValid(x,y+1)){
            cnt++;
        dfs(x,y+1);
    }
    if(isValid(x+1,y)){
            cnt++;
        dfs(x+1,y);
    }
    if(isValid(x,y-1)){
        dfs(x,y-1);
        cnt++;
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){

   cin>>n>>m;
   swap(n,m);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           vis[i][j]=0;
       }
   }
   int x,y;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           cin>>grid[i][j];
           if(grid[i][j]=='@')
           {
               x=i,y=j;
           }
       }
   }
   cout<<"Case "<<tc<<": ";
   cnt=1;
   dfs(x,y);
   cout<<cnt<<"\n";
    }


}

