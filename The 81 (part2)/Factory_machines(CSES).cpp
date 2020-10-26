#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,a,t;
    cin>>n>>t;

    vector<ll>v;
    for(int i=0;i<n;i++)
        cin>>a, v.push_back(a);

    ll L=1,H=1e18;
    ll s=0,ans=H;
    while(L<=H)
    {
        ll mid=(L+H)/2;
        for(int i=0;i<n;i++)
        {
          s+=min((mid)/v[i],(ll)1e9);
        }
        if(s<t)
            L=mid+1;
        else
            ans=min(ans,mid),H=mid-1;
        s=0;
    }
    cout<<ans<<"\n";
}
