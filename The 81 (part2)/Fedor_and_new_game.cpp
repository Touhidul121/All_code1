#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m,k,x,a;
    cin>>n>>m>>k;

    vector<int>v;
    for(int i=0;i<m+1;i++)cin>>a, v.push_back(a);

    int y=v[m],cnt=0,ans=0;

    for(int i=0;i<m;i++)
    {
        x=v[i];

        for(int j=0;j<=n;j++)
        {
            if((x&(1<<j))!=(y&(1<<j)))
            cnt++;
        }
        if(cnt<=k)ans++;
        cnt=0;
    }
    cout<<ans<<"\n";
}
