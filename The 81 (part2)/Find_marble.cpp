#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX

vector<int>adj[100001];
int vis[100001];
vector<int>dist(100001,inf);

void dfs(int node,int d)
{
    vis[node]=1;
    dist[node]=d;
    for(int child:adj[node])
        if(!vis[child])
            dfs(child,d+1);
}

int main()
{
    int n,s,t,a;
    cin>>n>>s>>t;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        adj[i].push_back(a);
    }
    dfs(s,0);
    if(dist[t]==inf)
        cout<<-1<<"\n";
    else
        cout<<dist[t]<<"\n";
}
