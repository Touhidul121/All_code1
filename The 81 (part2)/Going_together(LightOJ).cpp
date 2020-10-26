#include<bits/stdc++.h>
using namespace std;
const int maxN = 20;
int n;
char grid[20][20];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int vis[20][20];
int sa,ea,sb,eb,sc,ec;
int x1,x2,y2,x3,y3;
int y;
vector<vector<int>>dist;
void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    dist[srcX][srcY]=0;
    vis[srcX][srcY]=1;

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;
        q.pop();


        for(int i=0;i<4;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];

            if(newX>=0 && newX<n && newY>=0 && newY<n && vis[newX][newY]==0 )
            {

                vis[newX][newY]=1;
                dist[newX][newY]=dist[curX][curY]+1;
                q.push({newX,newY});


            }
        }
    }

}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;
   for(int tc=1;tc<=t;tc++){
   cin>>n;
   int cnt=0;
   memset(vis,0,sizeof(vis));
   dist.resize(n+1,vector<int>(n+1,INT_MAX));
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>grid[i][j];
           if(grid[i][j]=='A')
            sa=i,ea=j;
           if(grid[i][j]=='B')
            sb=i,eb=j;
           if(grid[i][j]=='C')
            sc=i,ec=j;

           if(grid[i][j]=='X' && cnt==0)
           {
               x1=i,y=j;cnt++;
           }
           else if(grid[i][j]=='X' && cnt==1)
           {
               x2=i,y2=j;cnt++;
           }
           else if(grid[i][j]=='X' && cnt==2)
           {
               x3=i,y3=j;
           }
       }
   }



   bfs(sa,ea);
   int ans1=min(dist[x1][y],min(dist[x2][y2],dist[x3][y3]));


   memset(vis,0,sizeof(vis));
   dist.assign(n,vector<int>(n,INT_MAX));

   bfs(sb,eb);
   int ans2=min(dist[x1][y],min(dist[x2][y2],dist[x3][y3]));


   memset(vis,0,sizeof(vis));
   dist.assign(n,vector<int>(n,INT_MAX));

   bfs(sc,ec);

   int ans3=min(dist[x1][y],min(dist[x2][y2],dist[x3][y3]));

   int ans=max(ans1,max(ans2,ans3));

   cout<<"Case "<<tc<<": ";

       if(ans==INT_MAX)cout<<"trapped"<<"\n";
       else cout<<ans<<"\n";

   }
}
