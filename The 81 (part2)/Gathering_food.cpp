
#include<bits/stdc++.h>
using namespace std;

bool vis[100][100];
int dist[100][100];
char grid[100][100];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m,startX,startY,endX,endY;
char ch;
bool isValid(int i,int j,char ch)
{
    if(i<1 || i>n || j<1 || j>n)
        return false;
    if(vis[i][j]==1 ||grid[i][j]=='#')
        return false;
    else
        return true;
}
void bfs(int srcX,int srcY,char ch)
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
            if(isValid(newX,newY,ch))
            {
                dist[newX][newY]=dist[curX][curY]+1;
                vis[newX][newY]=1;
                q.push({newX,newY});
            }
        }
    }
}

int main()
{

    cin>>n;
     map<char,pair<int,int>>mp;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            cin>>grid[i][j];
            if(grid[i][j]>='A' && grid[i][j]<='Z')
            mp[grid[i][j]]={i,j};
            {

        }
    }
    }
    int cnt=0;

    int b,c;
    char a1;
    int b1,c1;

    for(auto x:mp)
    {
       a1=x.first;
       b1=x.second.first;
       c1=x.second.second;
      break;
    }
    bool f=false;
    for(auto x:mp)
    {
        ch=x.first;
      bfs(b1,c1,ch);
      a=x.second.first;
      b=x.second.second;

      if(dist[a][b]==0)
      {
          f=true;
          break;
      }
      else
        cnt+=dist[a][b];
        a1=a;
        b1=b;
    }
    if(f)
        cout<<"Impossible"<<"\n";
    else
        cout<<cnt<<"\n";
}

