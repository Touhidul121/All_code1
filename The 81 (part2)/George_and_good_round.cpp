#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,a,b;
    cin>>n>>m;

    ll count=0;

    vector<ll>v(10000005);
ll ans=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v[a]++;
        ans=max(ans,a);
    }
set<ll>s;
    for(ll i=0;i<m;i++)
    {
        cin>>b;
        if(b>ans)
            v[b]++;
        s.insert(b);

    }

    for(auto x:s)
    {
        if(v[x]>0)
            count++;
    }

if(count>=n)
    cout<<0<<endl;
else
        cout<<n-count<<"\n";
}
