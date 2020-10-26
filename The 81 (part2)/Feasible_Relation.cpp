#include<bits/stdc++.h>
using namespace std;

#define N 1000005
vector<int>adj[N];
int vis[N];
int id[N],component_id;

void dfs(int node)
{
    if(!vis[node])
    {
        vis[node]=1;
        id[node]=component_id;

        for(int x:adj[node])
        {
            if(!vis[x])
                dfs(x);
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,k;
        string op;
        cin>>n>>k;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
            id[i]=0;
            vis[i]=0;
        }
        for(int i=1;i<=k;i++)
        {
            cin>>a>>op>>b;
            if(op=="=")
            {
            adj[a].push_back(b);
             adj[b].push_back(a);
            }
            else
            v.push_back({a,b});
        }
        component_id=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                component_id++;
                dfs(i);
            }
        }
        bool f=true;
        for(auto x:v)
        {
            a=x.first;
            b=x.second;
            if(id[a]==id[b] && id[a]!=0)
            {
                f=false;
                break;
            }
        }

        if(f==false)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}

