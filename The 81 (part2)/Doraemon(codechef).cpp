#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,m;

bool isValid(int x,int y)
{
    if(x<1 ||x>n || y<1 || y>m)
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
     cin>>n>>m;
     int ar[n+1][m+1];
     int l=1,x,y;
     ll ans=0;
     vector<pair<int,int>>v;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             cin>>ar[i][j];
             v.push_back({i,j});
             ans++;
         }
     }

     while(!v.empty())
     {
         vector<pair<int,int>> tmp=v;
         v.clear();

         for(pair<int,int> p:tmp)
         {
             if(isValid(p.first+l,p.second)&&isValid(p.first-l,p.second)&&isValid(p.first,p.second+l)&&isValid(p.first,p.second-l))
             {
                 x=p.first;
                 y=p.second;

                 if(ar[x-l][y]==ar[x+l][y] && ar[x][y-l]==ar[x][y+l])
                 {
                     ans++;
                     v.push_back(p);
                 }
             }
         }
         l++;
         tmp.clear();
     }
     cout<<ans<<"\n";
    }

}
