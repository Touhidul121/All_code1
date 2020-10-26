#include<bits/stdc++.h>
using namespace std;
vector<int>adj[200000];
int vis[200000];

bool dfs(int node,int par)
{

    vis[node]=1;
    for(int child:adj[node])
    {
        if(par==child)
            continue;
        else if(vis[child]==0)
        {
            if(dfs(child,node))
                return true;
        }
        else if(vis[child]==1)
        {
            return true;
        }
    }
    return false;

}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        int n,e,a,b;
        cin>>n;
        string x,y;
        int f=1;
        map<string,int>mp;

        for(int i=1; i<=n; i++)
        {
            cin>>x>>y;
            if(!mp.count(x))
            {
                mp[x]=f;
                f++;
            }
            if(!mp.count(y))
            {
                mp[y]=f;
                f++;
            }

            adj[mp[x]].push_back(mp[y]);
            adj[mp[y]].push_back(mp[x]);
        }
        f--;
        bool f1=false;

        for(int i=1; i<=f; i++)
        {
            if(!vis[i])
            {
                bool res=dfs(i,-1);

                if(res==true)
                {

                    f1=true;
                    break;
                }
            }
        }
        cout<<"Case "<<tc<<": ";
        if(f1)
            cout<<"No"<<"\n";
        else
            cout<<"Yes"<<"\n";

        for(int i=1; i<=f; i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
    }
}



