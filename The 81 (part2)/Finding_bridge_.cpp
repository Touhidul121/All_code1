#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int vis[100],in[100],low[100];
int timer;

void dfs(int node,int par)
{

        vis[node]=1;
        in[node]=low[node]=timer;
        timer++;

        for(int child:adj[node])
        {
            if(child==par)
                continue;
             if(vis[child]==1)

                low[node]=min(low[node],in[child]);

            else
            {
                dfs(child,node);
                low[node]=min(low[node],low[child]);
                if(low[child]>in[node])
                    cout<<" bridge = "<<node <<" - > "<<child<<"\n";

            }
        }

}

int main()
{
    int n,e,a,b;
    cin>>n>>e;

    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1,-1);
}
