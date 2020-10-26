#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ar[100001],gFre[1000001],ans[1000001];
void init()
{
    for(int i=1;i<=1000000;i++)
    {
        for(int j=i;j<=1000000;j+=i)
        {
            ans[j]+=gFre[i];
        }
    }
}

int main()
{
    int n,q,k;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ar[i];

    map<ll,ll>mp;

    for(int i=1;i<=n;i++)
    {
        map<ll,ll>tmp;
        tmp[ar[i]]++;

        if(ar[i]<=1000000)
            gFre[ar[i]]++;

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ll gcd=__gcd(it->first,ar[i]);
            if(gcd<=1000000)
                gFre[gcd]+=it->second;
            tmp[gcd]+=it->second;
        }
        mp=tmp;
    }

    init();
    cin>>q;
    while(q--)
    {
        cin>>k;
        cout<<ans[k]<<"\n";
    }
}
