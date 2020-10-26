#include<bits/stdc++.h>


using namespace std;

vector<int>adj[100001];
int res[100]

int main()
{
    int t;
    cin>>t;
    while(t--){
            int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        adj[i].clear(), res[i]=1;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if(m%2==0)
        cout<<1<<"\n";
    else

    }
}
