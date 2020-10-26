#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n,m,a,count=0;
    cin>>n>>m;

    vector<ll>v(n+1),v1(n+1),ans;

    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        v1[i]=v[i]+v1[i-1];
    }

    for(ll i=1;i<=n;i++)
    {
        if(v1[i]<=m)
        {
         ans.push_back(0);
        }
        else
        {
            vector<ll>v2;
            for(int k=1;k<i;k++)
            {
                v2.push_back(v[k]);

            }
            sort(v2.rbegin(),v2.rend());

            ll curr=v1[i];
            ll j=0;
            while(curr>m&&j<i-1)
            {
                count++;
                curr-=v2[j];
                j++;
            }
            ans.push_back(count);
            count=0;
            v2.clear();
        }

    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
}
