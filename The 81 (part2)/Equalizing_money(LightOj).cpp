#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxN=1006;
vector<ll>adj[maxN];

ll cnt,sum;
vector<ll>arr(maxN,0),vis(maxN,0);
void dfs(ll node)
{
    vis[node]=1;
    cnt++;
    sum+=arr[node];

    for(ll child:adj[node])
    {
        if(!vis[child])
            dfs(child);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    for(ll tc=1;tc<=t;tc++)
    {
        ll n,m,a,b;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        { cin>>arr[i];adj[i].clear();vis[i]=0;}

        while(m--)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bool f=false;
        set<ll>st;
        for(ll i=1;i<=n;i++)
        {
            if(!vis[i])
            {
              cnt=0,sum=0;
              dfs(i);
              if(sum%cnt!=0)
              {
                  f=true;break;
              }
              ll x=sum/cnt;
              st.insert(x);


            }
        }
        cout<<"Case "<<tc<<": ";
        if(f || st.size()>1)cout<<"No"<<"\n";
        else cout<<"Yes"<<"\n";
    }
}
