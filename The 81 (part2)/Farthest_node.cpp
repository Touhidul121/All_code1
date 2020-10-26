#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX

vector<pair<int,int>>adj[1000];
vector<int>adj1[1000];
vector<int>dist(100000,inf);
int mx;
int dist1[1000];
bool vis[1000];
void dfs(int node,int d)
{
 vis[node]=1;
 dist1[d]=d;


 for(int child:adj1[node])
    if(!vis[child])
    dfs(child,d+1);

}
void dijktra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.push({0,src});
    dist[src]=0;

    while(!pq.empty())
    {
        int cur=pq.top().second;
        int cur_d=pq.top().first;
        pq.pop();

        for(pair<int,int> neighbour:adj[cur])
        {
            if(cur_d+neighbour.second<dist[neighbour.first])
            {
                dist[neighbour.first]=cur_d+neighbour.second;
                mx=max(dist[neighbour.first],mx);
                pq.push({dist[neighbour.first],neighbour.first});
            }
        }
    }
}
void dfs1(int src)
{
    vis[src]=1;
    x+=a
}
int main()
{
    int n,m,a,b,w;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
      cin>>a>>b>>w;
      adj1[a].push_back(b);
      adj1[b].push_back(a);
      adj[a].push_back({b,w});
      adj[b].push_back({a,w});
    }
    dijktra(0);
    int mx=0,city;
    for(int i=0;i<n;i++)
        {
            dfs(i,0);
        for(int j=0;j<n;j++)
            {
                if(mx<dist1[j])
                {
                    mx=dist1[j];
                    city=j;
                }
            }



        }
}

