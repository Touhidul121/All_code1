#include<bits/stdc++.h>
using namespace std;
#define mx 100005
#define pb push_back
#define MX INT_MAX
struct node{
    int val;
    int cost;
};
vector<node>g[mx];
bool vis[mx];
int dis[mx];
for(int i=0; i<mx; i++) dis[i]=INT_MAX;
class cmp{
public:
    bool operator()(node &A, node &B){
        if(A.cost>B.cost) return true;
        return false;
    }
};
void Dijkstra(int source)
{
    priority_queue<node, vector<node>, cmp> pq;
    pq.push({source, 0});
    while(!pq.empty())
    {
        node current=pq.top();
        pq.pop();
        int val=current.val;
        int cost = current.cost;
        if(vis[val]==true) continue;
        dis[val]=cost;
        vis[val]=true;
        for(int i=0; i<g[val].size(); i++)
        {
            int next = g[val][i].val;
            int ncost=g[val][i].cost;
            if(vis[next]==false)
            {
                pq.push({next, cost+ncost});
            }
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    int node, edge;
    cin>>node>>edge;
    int u, v, w;
    for(int i=1; i<=edge; i++)
    {
        cin>>u>>v>>w;
        g[u].pb({v, w});
    }
    int source;
    cout<<"Enter source: ";
    cin>>source;
    Dijkstra(source);
    for(int i=1;  i<=node; i++)
    {
        cout<<"Node: "<<i<<" Distance: "<<dis[i]<<"\n";
    }
    return 0;
}
