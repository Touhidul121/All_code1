#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>adj[100001];
int vis[100001],dist[100001],dist1[100001],node,mx,ans;

void bfs(int src)
{
    memset(vis,0,sizeof(vis));
    memset(dist1,0,sizeof(dist1));
    queue<int>q;
    q.push(src);
    dist[src]=0;
    dist1[src]=0;
    mx=0,node=0,
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(pair<int,int> x:adj[cur])
        {
            if(!vis[x.first])
            {
                q.push(x.first);
                vis[x.first]=1;
                dist1[x.first]=dist1[cur]+x.second;
                dist[x.first]=dist[cur]+1;
                if(mx<dist[x.first])
                {
                    mx=dist[x.first];
                    node=x.first;
                    ans=dist1[node];
                }
            }
        }
    }
}
int main()
{
    int n,a,b,w;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    for(int i=0;i<=n-1;i++)
    {
        node=0,mx=0,ans=0;
        bfs(i);
        cout<<i<<" -> "<<node<<"  ";
     cout<<ans<<"\n";
    }
}
